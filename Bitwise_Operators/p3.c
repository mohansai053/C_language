//3.  WAP to find the given number is +ve or -ve using bitwise operators.

#include<stdio.h>

int main()
{
	int a;
	printf("Enter a number to check whether its a positive or negative\n");
	scanf("%d",&a);

	if((a&1<<31)==0)
		printf("%d is a positive number\n",a);
	else
		printf("%d is a negative number\n",a);
	return 0;
}
