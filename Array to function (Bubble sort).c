#include<stdio.h>
void Bubble_sort(int[]);

void Bubble_sort(int a[])
{
	int i,temp;
	for(i=0;i<10;i++)
	{
		int j;
		for(j=i+1;j<10;j++)
		{
			if(a[j]<a[i])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\n Printing sorted elements list");
	for(i=0;i<10;i++)
	{
		printf("%d\n",a[i]);
	}
}

int main()
{
	int array[10]={20,5,8,14,2,6,19,7,1,11};
	Bubble_sort(array);
	return 0;
}
