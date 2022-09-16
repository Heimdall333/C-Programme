#include<stdio.h>
#include<stdlib.h>
int main()
{
	char a='A';
	char b='B';
	const char *ptr=&a;
	printf("Value pointed by ptr: %c\n",*ptr);
	printf("Address pointed by ptr: %d\n",ptr);
	ptr=&b;
	printf("Value pointed by ptr: %c\n",*ptr);
	printf("Address pointed by ptr: %d\n",ptr);
	return 0;
}
