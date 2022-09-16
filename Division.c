#include <stdio.h>
int main()
{
	int a,b,c,res=0;
	printf("Enter two values:");
	scanf("%d%d",&a,&b);
	res=a/b;
	c=a%b;
	printf("Quotient is : %d\n",res);
	printf("Remainder is : %d",c);
	return 0;
}
