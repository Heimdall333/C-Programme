#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	printf("Enter the string: ");
	gets(str);
	printf("The string is: %s\n",str);
	printf("The string is: %s",strlwr(str));
	return 0;
}
