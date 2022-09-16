#include<stdio.h>
int m1(int n)
{
	if(n<=1)
	{
		return 1;
	}
	else
	{
		return n*m1(n-1);   // recurrsive func call
	}
}

void main()
{
	int n,f;
	printf("Enter the value:");
	scanf("%d",&n);
	f=m1(n);  // func call
	printf("Factorial is %d",f);
}
