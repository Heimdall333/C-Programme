#include<stdio.h>
int main()
{
	int num=50;
	int *p;
	p=&num;
	printf("Address of num variable is %d \n",p);
	p--;    
	printf("\n");
	printf("After decrement, Address of num variable is %d \n",p);
	return 0;
}
