#include <stdio.h>
int main ()
{
	int num;
	printf("Enter the value: ");
	scanf("%d",num);
	
	if(num<10)
	{
		if (num == 1)
		{
		printf("The value is: %d",num);	
		} 
		else
	{
		printf("%d is greater than 1",num);
	}
	}
	else
	{
		printf("The %d is greater than 10",num);
	}
	return 0;
}
