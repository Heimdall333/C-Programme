#include <stdio.h>

int main() {

   int a,b,c; 
   
   printf("Enter two value:");
   
   scanf("%d%d",&a,&b);
   
   c = a + b;
   printf("Addition is: %d\n", c );
	
   c = a - b;
   printf("Subtraction is: %d\n", c );
	
   c = a * b;
   printf("Multiplie is: %d\n", c );
	
   c = a / b;
   printf("Divide is: %d\n", c );
	
   c = a % b;
   printf("Modulus is: %d\n", c );
	
   c = a++; 
   printf("Increment of a is: %d\n", c );
	
   c = a--; 
   printf("Decrement of a is: %d\n", c );
   
   return 0;
}
