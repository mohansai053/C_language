//Single Line Comment

/*
 * Multi Line Comments
 * Comments are used to make code more readability, This line is skippable part while execution on the RAM.
 */

#include<stdio.h>		//Header file including
//#define pi 3.14		//Macros
int global_var;			//Global Variable

void fun1(void);		//User defined function definations

int main()
{
	int local_var;		//Local variable initialization

	//Statements
	printf("Hello World..!\n");		//Prinf function with argument as string with escape sequence

	printf("%d is local variable value\n%d is the global variable default value\n",local_var,global_var);	//Value retriving from variables

	return 0;		//Return value from the program
}

