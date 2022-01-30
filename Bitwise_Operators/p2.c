//2. WAP to find the given number is even or odd using bitwise operators.

#include<stdio.h>

int main()
{
	int var_1;

	printf("Enter a integer value to check whether it is Even or Odd\n");
	scanf("%d",&var_1);
	
	(var_1&1)==0 ? printf("%d is an Even number\n",var_1) : printf("%d is Odd number\n",var_1);	//Terenary Operator

	return 0;
}
