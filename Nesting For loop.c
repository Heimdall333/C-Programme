#include <stdio.h>
int main()
{
	int n;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	int i;
	for (i=1;i<n;i++)
	{
		int j;
		for(j=1,j<=10;j++)
		{
			printf("%d\t",(i*j));
		}
		printf("\n");
	}
	return 0;
}
