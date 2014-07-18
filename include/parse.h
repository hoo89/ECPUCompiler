/*
 *	Program:	Educational CPU assembly compiler
 *	File Name:	parse.h
 *	Descrioption:	header for parser
 */

#pragma once

#define MAXSTRLEN 256
#define MAXLABELS 256
#define MAXREFS 256
#define MAXOBS 256

enum PRINT_OPT {PRINT_HEADER, PRINT_ADDRESS, PRINT_OBJECT, PRINT_SOURCE, PRINT_OPT_END};

typedef struct Instruction {
	/* instruction name */
	char is_name[4];
	/* instruction code (refer 表4) */
	unsigned char code;
	/* mask */
	unsigned char mask;
	/* require B'? 0:x 1:○ 2:◎ */
	int require_op;
} IS;

/*
 *	Base of object code 
 *	One program line to one object
 */
typedef struct Object
{
	unsigned char word[2];
	struct Label *label;
	char require_w2;
	int line_num;
} OB;

struct Label {
	char name[MAXSTRLEN];
	unsigned char address;
};

void set_input_file(FILE *f);
void yyerror(const char *s);
void calc_object_code(struct Object *ob, struct Object *is, struct Object *op);
void set_label(char *label);
void set_label_ref(OB *ob, char *name);
void add_object(OB ob);
void print_labels();
void print_objects(int *opt);