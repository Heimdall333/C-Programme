#include<stdio.h>
int main()
{
	int i = 10;
	printf("Printing values from 10 to 0");
	printf("\n");
	while (i>=0)
	{
		printf("%d\t",i);
		i--;
	}
	printf("\n");
	printf("\n");
	int j = 0;
	printf("Printing values from 0 to 10");
	printf("\n");
	while (j<=10)
	{
		printf("%d\t",j);
		j++;
	}
	return 0;
}
