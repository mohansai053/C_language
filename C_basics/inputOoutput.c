//Input and output functions
//scanf() - used for taking input from user and printf() - used for printing output on screen

#include<stdio.h>

int main()
{
	int a;				// Variable of interger type

	printf("Hello World!\n"); 	//'/n' is the escape scequence to get the curser in next line
       					//and this line of statement use for print statement on terminal

	printf("Enter an interger to variable\n");
	scanf("%d",&a);			//Scanf() used to take input from user and '%d' is the format specifier used for interger decimal value
					/* & is used to specify the address of variable- a  */

	printf("Enter value in variable is : %d\n",a);	//Printing the value of ' a ' on screen

	return 0;
}
