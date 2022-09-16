#include <stdio.h>
int main()
{
    int i, j, a=5;

    for(i=1; i<=a; i++)
    {
        for(j=a; j>=i; j--)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}
