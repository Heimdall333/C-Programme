#inude<stdio.h>
int*getarray()
{
	static int array[7];
	printf("Enter the elements of array: ");
	int i;
	for(i=0;i<7:i++)
	{
		scanf("%d",&array[i]);
	}
	return array;
}
int main()
{
	int*ptr;
	ptr=getarray();
	printf("\nElement of array are: ");
	int i;
	for(i=0;i<7;i++)
	{
		printf("%d\t",ptr[i]);
	}
	return 0;
}
