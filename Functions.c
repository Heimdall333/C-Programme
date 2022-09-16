#include<stdio.h>
int add(int,int);
int add(int a,int b)
{
	int c;
	c=a+b;
	return c;
}
int main()
{
	int a,b,sum=0;
	printf("Enter the value of a and b: ");
	scanf("%d %d",&a,&b);
	sum = add (a,b);
	return 0;
}
