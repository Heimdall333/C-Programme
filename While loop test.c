#include<stdio.h>
int main()
{
	int a=1,sum=0;
	while(a<=10)
	{
		sum = sum+a;
		a++; 
	}
	printf("Addition is: %d ",sum );
	return 0;
}
