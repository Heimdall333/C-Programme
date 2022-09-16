#include<stdio.h>
void swap(int,int);
int main()
{
int a=20,b=30;
swap(a,b);
printf("\na=%d \t b=%d\n",a,b);
return 0;
}
void swap(int x,int y)
{
	int sum;
	int temp;
	temp=x;
	x=y;
	y=temp;
	printf("x=%d \t b=%d\n",x,y);
	sum=x+y;
	printf("\nSum is: %d",sum);
	printf("\n");
}
