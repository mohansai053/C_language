/*Write a prorgram for the following one.
      a) Set a bit      b) Clear a bit    c) Toggle a  bit */

#include<stdio.h>

int main()
{
	int a,pos,b,res;

	printf("Enter the number\n");
	scanf("%d",&a);

	printf("Enter the position\n");
	scanf("%d",&pos);
	
	printf("Before performing operations, The binary equivalent of %d is as follows\n",a);
	for(b=31;b>=0;printf("%d ",a>>b&1),b--);
	
	printf("\n\nPlease choose an option to perform any one operation\n1. Set a bit\n2. Clear a bit\n3. Toggle a bit\n");
	int op;
	scanf("%d",&op);

	switch(op)
	{
		case 1:
			res = a|1<<pos;
			break;
		case 2:
			res = a&~(1<<pos);
			break;
		case 3:
			res = a^1<<pos;
			break;
		default:
			printf("Wrong Operation choosen, Try next time\n");
	}
	
	if(op == 1 || op == 2 ||op == 3 )
	{	
		printf("\nAfter performing operations, The binary equivalent of %d is as follows\n",res);
		for(b=31;b>=0;printf("%d ",res>>b&1),b--);
		printf("\n");
	}

}
