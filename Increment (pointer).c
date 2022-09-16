#include<stdio.h>
int main()
{
	int num = 50;
	int *p;
	p=&num;
	printf("Address of number variable is %d \n",p);
	printf("Value of pointer variable is %d \n",*p);
	*p=*p+1;
	printf("\n");
	printf("After increment,value at 'p' pointer variable %d",*p);
	return 0;	
}
