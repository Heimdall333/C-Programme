#include <stdio.h>
#include <math.h>
int main()
{
	int n,a;
	printf("Enter a no.: ");
	scanf("%d",&n);
	a = sqrt(n);
	if (n-(a*a)==0)
	{
		printf("%d is a perfect square",n);
	}
	else
	{
		printf("%d is not a perfect square",n);
	}
	return 0;
}
