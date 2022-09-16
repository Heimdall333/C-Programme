#include<stdio.h>
#include<string.h>
int main()
{
	FILE *fp;
	fp=fopen("disha1.txt","w");
	
	char exam[25][20];
	printf("Enter your exam status: ");
	gets(exam);
	
	fprintf(fp,"%s\n",exam);
	
	fclose(fp);
	
	return 0;
}
