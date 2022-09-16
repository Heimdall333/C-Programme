#include <stdio.h>
int main()
{
	int a=10,b=5;
	float c,d;
	c=b/a;
	d=(float)b/a;
	printf("Division is: %f\n",c);
	printf("Division is: %f",d);
	return 0;
}
