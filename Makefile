CC=gcc -Wall
CFLAGS=-I./include -DYYERROR_VERBOSE

bin/compiler: src/main.o src/parse.tab.o src/lex.yy.o include/parse.tab.h
	${CC} ${CFLAGS} -o $@ src/main.o src/parse.tab.o src/lex.yy.o

src/lex.yy.c: src/analize.l
	cd src;	flex analize.l

src/parse.tab.c: src/parse.y
	cd src;	bison parse.y

include/parse.tab.h: src/parse.y
	cd include; bison -d ../src/parse.y

clean:
	rm bin/compiler src/*.o

