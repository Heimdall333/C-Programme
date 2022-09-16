#include<stdio.h>
#include<stdbool.h>
int main()
{
	bool x;
	printf("Enter (true/false) for x: ");
	scanf("%d",&x);
	if(x==true)
	{
		printf("The value of x is true");
	}
	else
	{
		printf("The value of x is false");
	}
	return 0;
}
