#include<stdio.h>
int *getarray(int*a)
{
	printf("Enter the element: \n");
	int i;
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	return a;
}
int main()
{
	int *n;
	int a[5];
	n=getarray(a);
	printf("\nElements of array are: ");
	int i;
	for(i=0;i<5;i++)
	{
		printf("%u\t",&n[i]); //For value %u,n[i]
	}
	return 0;
}
