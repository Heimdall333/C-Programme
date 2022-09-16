#include<stdio.h>
void sum(int,int);   
void main()
{
	int a,b;
    printf("\n Calculate the sum of two numbers");
    printf("\n Enter two numbers:");
	scanf("%d %d",&a,&b);
	sum(a,b);   
}

void sum(int a,int b)  
{
	printf("\n The sum is %d",a+b);      
}
