#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char ch;
	
	fp=fopen("disha1.txt","r");
	
	if(fp ==NULL)
	{
		printf("Unable to open the file");
	}
	else
	{
		printf("File read operation: ");
		
		do
		{
			ch=fgets(fp);
			put char (ch);
		}while(ch!=EOF);
         		
	}
	fclose(fp);
	return 0;
}
