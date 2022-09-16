#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter angle a value: ");
	scanf("%d",a);
	printf("enter angle b value: ");
	scanf("%d",b);
	c= 180-(a+b);
	printf("Angle value of c is: %d",c);
	return 0;
}
