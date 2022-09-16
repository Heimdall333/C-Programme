#include<stdio.h>
void pointerarray(char*array)
{
	printf("Element of array is: \n");
	int i;
	for(i=0;i<5;i++)
	{
		printf("%u\t",array[i]); //For address %c,&array[i]
	}
}
int main()
{
	char array[5]={'A','B','C','D','E'};
	pointerarray(array);
	return 0;
}
