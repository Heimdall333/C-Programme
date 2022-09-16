#include<stdio.h>
int main()
{
	int num = 50;
	int *p;
	p = &num;
	printf("Address of num variable is %d \n",p);
	p=p+3;
	printf("\n");
	printf("After adding 3,Address of num variable is %d\n",p);
	return 0;
}
