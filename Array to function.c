#include<stdio.h>
void getarray(int a[])
{
	printf("\n Element of array are: ");
	int i;
	for(i=0;i<5;i++)
	{
		printf("%d\t",a[i]);
	}
}
int main()
{
	int a[5]={45,50,55,60,65};
	getarray (a);
	return 0;
}
