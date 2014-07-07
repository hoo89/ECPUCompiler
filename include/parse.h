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
	char require_w2;
	int line_num;
} OB;

struct Label {
	char name[MAXSTRLEN];
	unsigned char address;

	// when undefined label referenced add refs
	// when defined clear
	OB *refs[MAXREFS];
	int refs_len;
};

void yyerror(const char *s);
void calc_object_code(struct Object *ob, struct Object *is, struct Object *op);
void set_label(char *label);
void set_label_ref(OB *ob, char *name);
void add_object(OB ob);
void print_objects(void);