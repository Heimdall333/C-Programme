#include<stdio.h>
int main()
{
	int sum=0;
	int j;
	int i=1;
	int n=5;
	loop:
		printf("%d\n",i);
		i++;
	for(j=0;j<=10;j++)
	{
		sum=sum+j;
		if(j==5)
		{
			goto addition;
		}
		else if(i<=n)
		{
			goto loop;
		}
		printf("\n%d\t",sum);
	}
	addition:
		printf("Goto sum is: %d",sum);
		return 0;
	
}
