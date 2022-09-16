#include<stdio.h>
#include<string.h>
int main()
{
	char ch1[20]= "Welcome to India";
	printf("ch1 string is: %s\n",ch1);
	char ch2[11];
	strcpy(ch2,ch1);
	printf("ch2 sting is: %s\n",ch2);
	return 0;
}
