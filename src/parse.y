%{
/*
 *	Program:	Educational CPU assembly compiler
 *	File Name:	parse.y
 *	Descrioption:	assembly parser program using bison
 */

#include <stdio.h>
#include <string.h>
#include "parse.h"
#include "parse.tab.h"

static IS is_table[42] = {
	{"NOP", 0x0, 0xF8, 0},
	{"HLT", 0xC, 0xFC, 0},
	{"OUT", 0x10, 0xF8, 0},
	{"IN", 0x18, 0xF8, 0},
	{"RCF", 0x20, 0xF8, 0},
	{"SCF", 0x28, 0xF8, 0},
	{"LD", 0x60, 0xF0, 1},
	{"ST", 0x70, 0xF0, 2},
	{"ADD", 0xB0, 0xF0, 1},
	{"ADC", 0x90, 0xF0, 1},
	{"SUB", 0xA0, 0xF0, 1},
	{"SBC", 0x80, 0xF0, 1},
	{"CMP", 0xF0, 0xF0, 1},
	{"AND", 0xE0, 0xF0, 1},
	{"OR", 0xD0, 0xF0, 1},
	{"EOR", 0xC0, 0xF0, 1},
	{"SRA", 0x40, 0xF7, 0},
	{"SLA", 0x41, 0xF7, 0},
	{"SRL", 0x42, 0xF7, 0},
	{"SLL", 0x43, 0xF7, 0},
	{"RRA", 0x44, 0xF7, 0},
	{"RLA", 0x45, 0xF7, 0},
	{"RRL", 0x46, 0xF7, 0},
	{"RLL", 0x47, 0xF7, 0},
	{"BA", 0x30, 0xFF, 2},
	{"BVF", 0x38, 0xFF, 2},
	{"BNZ", 0x31, 0xFF, 2},
	{"BZ", 0x39, 0xFF, 2},
	{"BZP", 0x32, 0xFF, 2},
	{"BN", 0x3A, 0xFF, 2},
	{"BP", 0x33, 0xFF, 2},
	{"BZN", 0x3B, 0xFF, 2},
	{"BNI", 0x34, 0xFF, 2},
	{"BNO", 0x3C, 0xFF, 2},
	{"BNC", 0x35, 0xFF, 2},
	{"BC", 0x3D, 0xFF, 2},
	{"BGE", 0x36, 0xFF, 2},
	{"BLT", 0x3E, 0xFF, 2},
	{"BGT", 0x37, 0xFF, 2},
	{"BLE", 0x3F, 0xFF, 2},
	{"JAL", 0xA, 0xFF, 2},
	{"JR", 0xB, 0xFF, 2}
};

static int offset = MAX_IS - 42;
static int line_num = 0;
static unsigned char pc = 0;

static struct Label ltable[MAXLABELS];
static int ltable_len = 0;

static OB objects[MAXOBS];
static int objects_len = 0;

static OB zero;
%}

%start program;

%union {
	OB object;
	char name[MAXSTRLEN];
}

%token COMMENT SPACE NEWLINE COMMA TEOF
%token<name> LABEL OP_LABEL
%token<object> ACC IX ADDR ADDR1 ADDR2 IXADDR1 IXADDR2 NOP HLT OUT IN RCF SCF LD ST ADD ADC SUB SBC CMP AND OR EOR SRA SLA SRL SLL RRA RLA RRL RLL BA BVF BNZ BZ BZP BN BP BZN BNI BNO BNC BC BGE BLT BGT BLE JAL JR MAX_IS
%type<object> line instruction operand a_operand b_operand

%%

/* program = {line|comment_line NEWLINE} EOF */
program: TEOF {print_objects(); YYACCEPT;}
	| line NEWLINE {add_object($1); line_num++;} program
	| comment_line NEWLINE {line_num++;} program
;

/* line = [LABEL] SPACE instruction [SPACE operand] [SPACE COMMENT] */
line: instruction {calc_object_code(&$$, &$1, &zero);}
	| instruction SPACE COMMENT {calc_object_code(&$$, &$1, &zero);}
	| LABEL SPACE instruction {calc_object_code(&$$, &$3, &zero); set_label($1);}
	| LABEL SPACE instruction SPACE COMMENT {calc_object_code(&$$, &$3, &zero); set_label($1);}
	| instruction SPACE operand	{calc_object_code(&$$, &$1, &$3);}
	| instruction SPACE operand SPACE COMMENT		{calc_object_code(&$$, &$1, &$3);}
	| LABEL SPACE instruction SPACE operand		{calc_object_code(&$$, &$3,&$5); set_label($1);}
	| LABEL SPACE instruction SPACE operand SPACE COMMENT		{calc_object_code(&$$, &$3, &$5); set_label($1);}
;

/* comment_line = [SPACE] COMMENT */
comment_line:  COMMENT
	| SPACE COMMENT
;

instruction: NOP {$$.word[0] = is_table[NOP-offset].code; $$.require_w2 = is_table[NOP-offset].require_op;}
	| HLT {$$.word[0] = is_table[HLT-offset].code; $$.require_w2 = is_table[HLT-offset].require_op;}
	| OUT {$$.word[0] = is_table[OUT-offset].code; $$.require_w2 = is_table[OUT-offset].require_op;}
	| IN {$$.word[0] = is_table[IN-offset].code; $$.require_w2 = is_table[IN-offset].require_op;}
	| RCF {$$.word[0] = is_table[RCF-offset].code; $$.require_w2 = is_table[RCF-offset].require_op;}
	| SCF {$$.word[0] = is_table[SCF-offset].code; $$.require_w2 = is_table[SCF-offset].require_op;}
	| LD {$$.word[0] = is_table[LD-offset].code; $$.require_w2 = is_table[LD-offset].require_op;}
	| ST {$$.word[0] = is_table[ST-offset].code; $$.require_w2 = is_table[ST-offset].require_op;}
	| ADD {$$.word[0] = is_table[ADD-offset].code; $$.require_w2 = is_table[ADD-offset].require_op;}
	| ADC {$$.word[0] = is_table[ADC-offset].code; $$.require_w2 = is_table[ADC-offset].require_op;}
	| SUB {$$.word[0] = is_table[SUB-offset].code; $$.require_w2 = is_table[SUB-offset].require_op;}
	| SBC {$$.word[0] = is_table[SBC-offset].code; $$.require_w2 = is_table[SBC-offset].require_op;}
	| CMP {$$.word[0] = is_table[CMP-offset].code; $$.require_w2 = is_table[CMP-offset].require_op;}
	| AND {$$.word[0] = is_table[AND-offset].code; $$.require_w2 = is_table[AND-offset].require_op;}
	| OR {$$.word[0] = is_table[OR-offset].code; $$.require_w2 = is_table[OR-offset].require_op;}
	| EOR {$$.word[0] = is_table[EOR-offset].code; $$.require_w2 = is_table[EOR-offset].require_op;}
	| SRA {$$.word[0] = is_table[SRA-offset].code; $$.require_w2 = is_table[SRA-offset].require_op;}
	| SLA {$$.word[0] = is_table[SLA-offset].code; $$.require_w2 = is_table[SLA-offset].require_op;}
	| SRL {$$.word[0] = is_table[SRL-offset].code; $$.require_w2 = is_table[SRL-offset].require_op;}
	| SLL {$$.word[0] = is_table[SLL-offset].code; $$.require_w2 = is_table[SLL-offset].require_op;}
	| RRA {$$.word[0] = is_table[RRA-offset].code; $$.require_w2 = is_table[RRA-offset].require_op;}
	| RLA {$$.word[0] = is_table[RLA-offset].code; $$.require_w2 = is_table[RLA-offset].require_op;}
	| RRL {$$.word[0] = is_table[RRL-offset].code; $$.require_w2 = is_table[RRL-offset].require_op;}
	| RLL {$$.word[0] = is_table[RLL-offset].code; $$.require_w2 = is_table[RLL-offset].require_op;}
	| BA {$$.word[0] = is_table[BA-offset].code; $$.require_w2 = is_table[BA-offset].require_op;}
	| BVF {$$.word[0] = is_table[BVF-offset].code; $$.require_w2 = is_table[BVF-offset].require_op;}
	| BNZ {$$.word[0] = is_table[BNZ-offset].code; $$.require_w2 = is_table[BNZ-offset].require_op;}
	| BZP {$$.word[0] = is_table[BZP-offset].code; $$.require_w2 = is_table[BZP-offset].require_op;}
	| BN {$$.word[0] = is_table[BN-offset].code; $$.require_w2 = is_table[BN-offset].require_op;}
	| BP {$$.word[0] = is_table[BP-offset].code; $$.require_w2 = is_table[BP-offset].require_op;}
	| BZN {$$.word[0] = is_table[BZN-offset].code; $$.require_w2 = is_table[BZN-offset].require_op;}
	| BZ {$$.word[0] = is_table[BZ-offset].code; $$.require_w2 = is_table[BZ-offset].require_op;}
	| BNI {$$.word[0] = is_table[BNI-offset].code; $$.require_w2 = is_table[BNI-offset].require_op;}
	| BNO {$$.word[0] = is_table[BNO-offset].code; $$.require_w2 = is_table[BNO-offset].require_op;}
	| BNC {$$.word[0] = is_table[BNC-offset].code; $$.require_w2 = is_table[BNC-offset].require_op;}
	| BC {$$.word[0] = is_table[BC-offset].code; $$.require_w2 = is_table[BC-offset].require_op;}
	| BGE {$$.word[0] = is_table[BGE-offset].code; $$.require_w2 = is_table[BGE-offset].require_op;}
	| BLT {$$.word[0] = is_table[BLT-offset].code; $$.require_w2 = is_table[BLT-offset].require_op;}
	| BGT {$$.word[0] = is_table[BGT-offset].code; $$.require_w2 = is_table[BGT-offset].require_op;}
	| BLE {$$.word[0] = is_table[BLE-offset].code; $$.require_w2 = is_table[BLE-offset].require_op;}
	| JAL {$$.word[0] = is_table[JAL-offset].code; $$.require_w2 = is_table[JAL-offset].require_op;}
	| JR {$$.word[0] = is_table[JR-offset].code; $$.require_w2 = is_table[JR-offset].require_op;}
;

/* operand = a_operand COMMA b_operand */
operand:  a_operand COMMA b_operand {$$.word[0] = $1.word[0] + $3.word[0]; $$.word[1] = $3.word[1]; $$.require_w2 = $3.require_w2;}
	| a_operand {$$.require_w2 = 0;}
	| OP_LABEL {$$.word[0] = 0; set_label_ref(&$$, $1); $$.require_w2 = 1;}
;

/* a_operand = ACC | IX */
a_operand:	ACC {$$.word[0] = 0x0; $$.word[1] = 0;}
	| IX {$$.word[0] = 0x8; $$.word[1] = 0;}
;

/* b_operand = ACC | IX | d | [d] | (d) | [IX+d] | (IX+d) */
b_operand:	ACC {$$.word[0] = 0x0; $$.word[1] = 0; $$.require_w2 = 0;}
	| IX  {$$.word[0] = 0x1; $$.word[1] = 0; $$.require_w2 = 0;}
	| ADDR {$$.word[0] = 0x2; $$.word[1] = $1.word[1]; $$.require_w2 = 1;}
	| ADDR1 {$$.word[0] = 0x4; $$.word[1] = $1.word[1]; $$.require_w2 = 1;}
	| ADDR2 {$$.word[0] = 0x5; $$.word[1] = $1.word[1]; $$.require_w2 = 1;}
	| IXADDR1 {$$.word[0] = 0x6; $$.word[1] = $1.word[1]; $$.require_w2 = 1;}
	| IXADDR2 {$$.word[0] = 0x7; $$.word[1] = $1.word[1]; $$.require_w2 = 1;}
	;

%%

void yyerror(const char *s){
  fprintf (stderr, "l%d ERROR: %s\n", line_num, s);
}

void calc_object_code(OB *ob, OB *is, OB *op){
	ob->word[0] = is->word[0] + op->word[0];
	ob->word[1] = op->word[1];

	if(is->require_w2 == 2 && op->require_w2 == 0){
		yyerror("This operand require second word but does not given");
	}

	if(is->require_w2 == 0 && op->require_w2 == 1){
		yyerror("This operand doesn't take second word but given.");
	}
	
	ob->require_w2 = is->require_w2 && op->require_w2;
}

void set_label(char *name){
	int i,j;

	if(ltable_len > MAXLABELS - 1){
		yyerror("Too much Label");
	}

	for(i=0;i<ltable_len;i++){
		/* if find undefined label */
		if(strncmp(name, ltable[i].name, MAXSTRLEN) == 0){
			if(ltable[i].refs_len != 0){
				ltable[i].address = pc;
				for(j=0;j<ltable[i].refs_len;j++){
					ltable[i].refs[j]->word[2] = pc;
				}
				ltable[i].refs_len = 0;
				return;
			}else{
				yyerror("Double definition of label");
			}
		}
	}

	strncpy(ltable[ltable_len].name, name, MAXSTRLEN - 1);
	ltable[ltable_len].name[MAXSTRLEN] = '\0';
	ltable[ltable_len].address = pc;
	ltable[ltable_len].refs_len = 0;
	ltable_len++;
}

void set_label_ref(OB *ob, char *name){
	int i;

	for(i=0;i<ltable_len;i++){
		if(strncmp(name, ltable[i].name, MAXSTRLEN) == 0){
			if(ltable[i].refs_len == 0){
				ob->word[1] = ltable[i].address;
			}else{
				ltable[i].refs[ltable[i].refs_len] = ob;
				ltable[i].refs_len++;
			}
			return;
		}
	}

	// if it cannot find label
	strncpy(ltable[ltable_len].name, name, MAXSTRLEN - 1);
	ltable[ltable_len].refs[0] = ob;
	ltable[ltable_len].refs_len = 1;
	ltable_len++;
	return;
}
/*
unsigned char get_label_address(char *name){
	int i;
	for(i=0;i<ltable_len;i++){
		if(strncmp(name, ltable[i].name, MAXSTRLEN) == 0){
			return ltable[i].address;
		}
	}

	// if cannot find label
	for(i=0;i<undef_ltable_len;i++){
		if(strncmp(name, undef_ltable[i].name, MAXSTRLEN) == 0){
			
		}
	}
	undef_ltable[undef_ltable_len].name = 
	//yyerror("Cannot find label");
	//printf("\t%s\n", name);
	return 0;
}*/

void add_object(OB ob){
	objects[objects_len++] = ob;

	pc++;
	if(ob.require_w2){
		pc++;
	}
}

void print_objects(void){
	int i, a=0;
	
	for(i=0;i<objects_len;i++){
		printf("%02x\t", a);
		printf("%02x", objects[i].word[0]);
		a++;

		if(objects[i].require_w2){
			printf(" %02x", objects[i].word[1]);
			a++;
		}

		printf("\n");
	}
}

int main(void)
{
    yyparse();

    return 0;
}