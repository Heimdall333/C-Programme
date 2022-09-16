#include <stdio.h>
int max(int num1, int num2, int num3);
int main() 
{
    int num1, num2, num3, maximum;
    printf("Enter any three numbers: ");
    scanf("%d%d%d",&num1,&num2,&num3);
    
    maximum = max(num1, num2, num3);  

    
    printf("\nMaximum = %d\n", maximum);
    
    return 0;
}

int max(int num1, int num2,int num3)
{
    return num1>num2?(num1>num3?num1:num3):(num2>num3?num2:num3);
}

