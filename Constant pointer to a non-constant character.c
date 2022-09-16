#include<stdio.h>
#include<stdlib.h>
int main()
{
	char a='A';
	char b='B';
	char *const ptr=&a;
	printf("value pointed by ptr:%c\n",*ptr);
	printf("address pointed by ptr:%d\n",ptr);

	*ptr=b;
	printf("value pointed by ptr:%c\n",*ptr);
	printf("address pointed by ptr:%d\n",ptr);

	return 0;
}
