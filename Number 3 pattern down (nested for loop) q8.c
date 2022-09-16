#include <stdio.h>
int main()
{
    int i=5,j,a=5;
    while (i>=1)
    {
        j=5;
        while (j>=i)
        {
            printf("%d",a);
            j--;
        }
        printf("\n");
        i--;
        a--;
    }
    return 0;
}
