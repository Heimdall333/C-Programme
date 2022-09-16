#include <stdio.h>
int main()
{
    int i=1,j;
	char a='*';
    while (i<=5)
    {
        j=1;
        while (j<=i)
        {
            printf("%c",a);
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}
