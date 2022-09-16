#include<stdio.h>
struct student
{
	char name[20];
	int rno;
	float perc;
};

int main()
{
	struct student s1={"Atharva",156,88.34};
	struct student s2;
	
	printf("Enter the details of s2\n :");
	
	printf("Enter name :");
	scanf("%s",s2.name);
	
	printf("Enter rollno :");
	scanf("%d",&s2.rno);
	
	printf("Enter percentage :");
	scanf("%f",&s2.perc);
	
	printf("\n");
	
	printf("Details of student 1 :");
	printf("\n");
	
	printf("\nStudent Name=%s",s1.name);
	printf("\nStudent Rollno=%d",s1.rno);
	printf("\nStudent Percentage=%f",s1.perc);
	
	printf("\n");
	
	printf("\nDetails of student 2 :");
	printf("\n");
	
	printf("Student Name=%s \n Student Rollno=%d \n Student Percentage=%f",s2.name,s2.rno,s2.perc);
	
	return 0;
}
