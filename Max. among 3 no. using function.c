#include <stdio.h>

int maximumNumber(int a,int b, int c)
{
	int maximum=0;
	if(a>b && a>c)
		maximum=a;
	else if(b>a && b>c)
		maximum=b;
	else
		maximum=c;
	return maximum;
}

int main()
{
	int a,b,c;
	
	printf("Enter three numbers: ");
	scanf("%d%d%d",&a,&b,&c);
	printf("Largest number is: %d\n",maximumNumber(a,b,c));
	
	return 0;
}
