#include<stdio.h>
int main()
{
   int rollno,Total,Maths,Science,English;
   float Per;
   char grade,name[20];
   printf("Enter the name of Student: ");
   scanf("%s",&name);
   printf("\nEnter the Roll no. of Student: ");
   scanf("%d",&rollno);
   printf("\nEnter the mrks got in Maths,Science,English: ");
   scanf("%d%d%d",&Science,&English,&Maths);
   Total = Maths+Science+English;
   Per = Total/3;
   printf("\nThe Total is: %d\n",Total);
   printf("The Percentage is: %f",Per);
   if(Per<0 || Per>100) 
   {
     printf("Invalid Score");
     return 0;
   }

   if(Per>=90 && Per<=100)
     grade = 'A';

   else if(Per>=80)
     grade = 'B';

   else if(Per>=70)
     grade = 'C';

   else if(Per>=60)
     grade = 'D';

   else if(Per>=50)
     grade = 'E';

   else
     grade = 'F';

   printf("\nGrade: %c\n", grade);

   return 0;
}
