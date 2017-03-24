
#include <stdio.h>
#include <ctype.h>

/* Global Variables */
int lineCount;
char line[100];
int linePos;
int charClass;
char lexeme[100];
int lexLen;
char nextChar;
int token;
int nextToken;
FILE * fp;

/* Character Classes */
#define LETTER 0
#define DIGIT 1
#define UNKNOWN 99

/* Token Codes */
#define INT_LIT 10
#define IDENT 11
#define ASSIGN_OP 20
#define ADD_OP 21
#define SUB_OP 22
#define MULT_OP 23
#define DIV_OP 24
#define LEFT_PARAN 25
#define RIGHT_PAREN 26

int main(int argc, char ** argv) //function takes in two line arguments - an interger argument & character array
{

    if ( argc < 2 ) {
		printf( "Usage: parser <Input Filename>\n" ); //if the user chooses 1 for their integer argument, the program returns the name of the input file
		return 1;
	}

	
}

