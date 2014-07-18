#include <getopt.h>
#include <stdio.h>
#include "parse.h"
#include "parse.tab.h"

FILE *yyin;

int main(int argc, char *argv[])
{
	int opt[PRINT_OPT_END] = {0};
	char ch;

	opt[PRINT_OBJECT] = 1;

	while ((ch = getopt(argc, argv, "vh")) != -1){
		switch (ch) {
		case 'v':
			opt[PRINT_ADDRESS] = 1;
			opt[PRINT_OBJECT] = 1;
			opt[PRINT_SOURCE] = 1;
			opt[PRINT_HEADER] = 1;
			break;
		case '?' :
		case 'h' :
			fprintf(stderr, "Usage: %s [ filename -vh? ]\n", argv[0]);
			fprintf(stderr, "-v: Verbose output(For human) -h -?: help\n");
			return -1;
			break;
		}
	}

	if (argc - optind > 0){
        if((yyin = fopen(argv[optind], "r")) == NULL){
			fprintf(stderr,"Cannot open input file.\n");
			return -1;
		}
    }

	yyparse();

	print_objects(opt);
	return 0;
}
