%{	
/*
 *	Program:	Educational CPU assembly compiler
 *	File Name:	analizer.l
 *	Descrioption:	lexical analyzer using flex
 * 	Author:		hoo89
 */
#include <stdio.h>
#include "parse.h"
#include "parse.tab.h"
%}

COMMENT	;[^;\n]*

ACC ACC
IX IX
ADDR [0-9A-Fa-f]{1,2}H
ADDR1 \[[0-9A-Fa-f]{1,2}H\]
ADDR2 \([0-9A-Fa-f]{1,2}H\)
IXADDR1 \[IX\+[0-9A-Fa-f]{1,2}H\]
IXADDR2 \(IX\+[0-9A-Fa-f]{1,2}H\)

NOP NOP
HLT HLT
OUT OUT
IN IN
RCF RCF
SCF SCF
LD LD
ST ST
ADD ADD
ADC ADC
SUB SUB
SBC SBC
CMP CMP
AND AND
OR OR
EOR EOR
SRA SRA
SLA SLA
SRL SRL
SLL SLL
RRA RRA
RLA RLA
RRL RRL
RLL RLL
BA BA
BVF BVF
BNZ BNZ
BZP BZP
BN BN
BP BP
BZN BZN
BZ BZ
BNI BNI
BNO BNO
BNC BNC
BC BC
BGE BGE
BLT BLT
BGT BGT
BLE BLE
JAL JAL
JR JR

LABEL [A-Z][A-Z0-9]*:
OP_LABEL	[A-Z][A-Z0-9]*

%option noyywrap

%%
{COMMENT}	{
	return COMMENT;
}


{ADDR}   {
	unsigned int a;
	sscanf(yytext, "%xH", &a);
	yylval.object.word[1] = a;
	return ADDR;
}

{ADDR1}   {
	unsigned int a;
	sscanf(yytext, "[%xH]", &a);
	yylval.object.word[1] = a;
	return ADDR1;
}

{ADDR2}   {
	unsigned int a;
	sscanf(yytext, "(%xH)", &a);
	yylval.object.word[1] = a;
	return ADDR2;
}

{IXADDR1}   {
	unsigned int a;
	sscanf(yytext, "[IX+%xH]", &a);
	yylval.object.word[1] = a;
	return IXADDR1;
}

{IXADDR2}   {
	unsigned int a;
	sscanf(yytext, "(IX+%xH)", &a);
	yylval.object.word[1] = a;
	return IXADDR2;
}

{ACC}	{
	return ACC;
}

{IX}	{
	return IX;
}

{NOP}	{
	return NOP;
}
{HLT}	{
	return HLT;
}
{OUT}	{
	return OUT;
}
{IN}	{
	return IN;
}
{RCF}	{
	return RCF;
}
{SCF}	{
	return SCF;
}
{LD}	{
	return LD;
}
{ST}	{
	return ST;
}
{ADD}	{
	return ADD;
}
{ADC}	{
	return ADC;
}
{SUB}	{
	return SUB;
}
{SBC}	{
	return SBC;
}
{CMP}	{
	return CMP;
}
{AND}	{
	return AND;
}
{OR}	{
	return OR;
}
{EOR}	{
	return EOR;
}
{SRA}	{
	return SRA;
}
{SLA}	{
	return SLA;
}
{SRL}	{
	return SRL;
}
{SLL}	{
	return SLL;
}
{RRA}	{
	return RRA;
}
{RLA}	{
	return RLA;
}
{RRL}	{
	return RRL;
}
{RLL}	{
	return RLL;
}
{BA}	{
	return BA;
}
{BVF}	{
	return BVF;
}
{BNZ}	{
	return BNZ;
}
{BZ}	{
	return BZ;
}
{BZP}	{
	return BZP;
}
{BN}	{
	return BN;
}
{BP}	{
	return BP;
}
{BZN}	{
	return BZN;
}
{BNI}	{
	return BNI;
}
{BNO}	{
	return BNO;
}
{BNC}	{
	return BNC;
}
{BC}	{
	return BC;
}
{BGE}	{
	return BGE;
}
{BLT}	{
	return BLT;
}
{BGT}	{
	return BGT;
}
{BLE}	{
	return BLE;
}
{JAL}	{
	return JAL;
}
{JR}	{
	return JR;
}

{LABEL}	{
	sscanf(yytext, "%255[^:]", yylval.name);
	return LABEL;
}
{OP_LABEL}	{
	sscanf(yytext, "%255s", yylval.name);
	return OP_LABEL;
}

","	{
	return COMMA;
}

"\n"	{
	return NEWLINE;
}

[ \t]+ {
	return SPACE;
}

<<EOF>> {
	return TEOF;
}

.	{
	yyerror("Illegal character");
	printf("\t%s\n", yytext);
}

%%
