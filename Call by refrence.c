#include<stdio.h>
void swap(int*,int*);
int main()
{
	int a=20,b=30;
	swap(&a,&b);
	printf("\n a=%d \t b=%d",a,b);
	return 0;
}
void swap(int*a,int*b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
