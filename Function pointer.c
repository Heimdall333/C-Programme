#include<stdio.h>
int add(int,int);
int main()
{
	int a,b;
	int(*p)(int,int);
	int result;
	printf("Enter values of a and b: ");
	scanf("%d%d",&a,&b);
	p=add;
	result=(*p)(a,b);
	printf("The value after addition is: %d",result);
	return 0;	
}
int add(int a,int b)
{
	int c=a+b;
	return c;
}
