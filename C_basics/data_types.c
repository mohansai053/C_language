/*
 * Here are the basics data types which we can also call them as primitive data types
 */

#include<stdio.h>

int main()
{
	int a;			// Integer varaible, 4bytes of memory capable of storing unsigned and signed integer data
	char ch;		// 1byte of character data will stored in both unsigned and signed
	float f;		// 4 bytes of floating point data(decimal data) in IEE754 format
	double d;		// 8bytes of decimal data in IEE 754 standard

	//Sizeof is a operator to know the size of the data variable/value
	//Format specifiers for - Int : %d, %hd, %ld, %u - Float : %f, %lf, %g(exponential form) - Char : %c - Double : %f, %e, %g
	
	//Format specifiers will help to print the data in desired form
	//Escape sequences helps the statement to perform additional purpose
	
	printf("%d is Integer value\n %c is Char value\n%f is float Value\n%f is Double value\n\nSize of value of \nInt\t-\t%ld\nChar\t-\t%ld\nFloat\t-\t%ld\nDouble\t-\t%ld\n",a,ch,f,d,sizeof(a),sizeof(ch),sizeof(f),sizeof(d));
		
	return 0;
}
