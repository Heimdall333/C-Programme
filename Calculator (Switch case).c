#include<stdio.h>
int main()
{
	char op;
	int a,b,c;
	printf("Enter a operator: ");
	scanf("%c",&op);
	printf("Enter a values of a and b: ");
	scanf("%d%d",&a,&b);
	
	switch(op)
	{
		case'+':
			c=a+b;
			printf("Addition is: %d + %d = %d",a,b,c);
			break;
		
		case'-':
			c=a-b;
			printf("Subtraction is:%d-%d=%d",a,b,c);
			break;
			
		case'*':
			c=a*b;
			printf("Multiplication is:%d*%d=%d",a,b,c);
			break;
		
		case'/':
			c=a/b;
			printf("Division is:%d/%d=%d",a,b,c);
			break;
		
		default:
		    printf("Enter a valid operator");
		    break;				
	}    
		return 0;
}
