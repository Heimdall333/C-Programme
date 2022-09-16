#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp1,*fp2;
	char ch;
	fp1=fopen("xyz.txt","w");
	fp2=fopen("disha1.txt","r");
	
	ch=gets(fp2);
	while(ch!=EOF);
	{
		fputc(ch,fp1);
		ch=fgetc(fp2);
	}
	fclose(fp1);
	fclose(fp2);
	return 0;
}
