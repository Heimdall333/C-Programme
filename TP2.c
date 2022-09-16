#include<stdio.h>
int main()
{
	int first,second,temp;
	printf("Enter a value: ");
	scanf("%d",&first);
	printf("Enter b value: ");
	scanf("%d",&second);
	temp = first;
	first = second;
	second = temp;
	printf("a= %d\n",first);
	printf("b= %d",second);
	return 0;
}
