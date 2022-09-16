#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	printf("Enter string: ");
	gets(str);
	printf("The string is: %s\n",str);
	printf("The reverse of string is: %s\n",strrev(str));
	return 0;
}
