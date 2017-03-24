
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

//Error Function
void error( const char * error ) {
	printf( "Error: '%s' line %d, column %d:\n%s\n", error, lineCount, linePos, line );
}


void addChar() {
	if ( lexLen <= 98 )
	{
		lexeme[lexLen++] = nextChar;
		lexeme[lexLen] = 0;
	}
	else
		printf( "Error: lexeme is too long.\n");
}


void getChar() {
	if ( (nextChar = line[linePos++]) != 0 ) {
		if ( isalpha(nextChar) )
			charClass = LETTER;
		else if ( isdigit(nextChar))
			charClass = DIGIT;
		else
			charClass = UNKNOWN;
	}
	else
		charClass = EOF;
}


void getNonBlank() {
	while( isspace(nextChar) && nextChar != '\r' && nextChar != '\n' )
		getChar();
}


int main(int argc, char ** argv) //function takes in two line arguments - an interger argument & character array
{

    if ( argc < 2 ) {
		printf( "Usage: parser <Input Filename>\n" ); //if the user chooses 1 for their integer argument, the program returns the name of the input file
		return 1;
	}

	fp = fopen( argv[1], "r" ); //else, the program will attempt will attempt to run
	if ( fp == NULL ) {
		printf( "Error: Failed to open input file %s.", argv[1] ); //if the user
		return 1;
	}
	}
}

