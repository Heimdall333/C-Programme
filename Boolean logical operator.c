#include<stdio.h>
#include<stdbool.h>
int main()
{
	bool x=false;
	bool y=true;
	
	printf("The value of x&&y is %d\n",x&&y);
	printf("The value of x||y is %d\n",x||y);
	printf("The value of !x,!y is %d,%d\n",!x,!y);
	return 0;
}
