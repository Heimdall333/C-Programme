#include<stdio.h>
typedef enum {true,false}b;
int main()
{
	b x=false;
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

