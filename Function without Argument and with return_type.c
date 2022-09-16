#include<stdio.h>
int sum();   
int main()
{
	int result;
    printf("\n Calculate the sum of two numbers");
    result=sum();  
	printf("The sum is %d",result);   
}

int sum()   
{
	int a,b;
	printf("\n Enter two numbers:");
	scanf("%d %d",&a,&b);
	return a+b;      
}
