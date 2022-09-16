#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20],str2[10];
	printf("Enter the string1: ");
	gets(str1);
	printf("Enter the string2: ");
	gets(str2);
	if(strcmp(str1,str2)==0)
	{
		printf("Both the string are equal.");
	}
	else
	{
		printf("Both the string are unequal.");
	}
	return 0;
}
