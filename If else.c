#include <stdio.h>
int main()
{
	int a,b;
	printf("Enter the value of a: ");
	scanf("%d",&a);
	printf("Enter the value of b: ");
	scanf("%d",&b);
	if (a>b)
	{
	    printf("The value of %d is greater than %d",a,b);	
	}
	else
	{
	    printf("The value of %d is not greater than %d",a,b);	
	}
	printf("Both the values are equal: %d=%d",a,b);
	return 0;
}
