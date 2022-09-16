#include <stdio.h>
void inc()
{
	int a = 10;
	static int b = 10;
	a = a+1;
	b = b+1;
	printf("Addition is: %d %d\n",a,b);
}
int main()
{
	printf("First static value is\n");
	inc();
	printf("Second static value is\n");
	inc();
}
