#include <stdio.h>
#include <math.h>
int main()
{
	int n;
	printf("Enter a year: ");
	scanf("%d",&n);

	if (n%4==0)
	{
		printf("%d is a leap year",n);
	}
	else
	{
		printf("%d is not a leap year",n);
	}
	return 0;
}
