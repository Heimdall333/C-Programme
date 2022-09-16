#include<stdio.h>
#include<string.h>
int main()
{
	FILE *file;
	char str[20][10];
	
	file=fopen("disha1.txt","a");
	printf("Enter your message: ");
	gets(str);
	
	fprintf(file,"%s\n",str);
	
	printf("File append operation performed successfully");
	
	fclose(file);
	
	return 0;
}
