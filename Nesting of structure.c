#include<stdio.h>
struct student
{
	int id;
	char name[20];
	struct DOB;
	{
		int day;
		int month;
		int year;
	}d;
	struct percent;
	{
		int precent;
		char grade;
	}p;
};
int main()
{
	printf("Eter Id: ");
	scanf("%d",&s.id);
	
	printf("Enter name: ");
	scanf("%s",s.name);
	
	printf("Enter DOB: ");
	scanf("%d%d%d"&s.d.day,&s.d.month,&s.d.year);
	
	printf("Enter percentage and grade: ");
	scanf("%d%c",&s.p.percent,%s.p.grade);
	
	printf("\n");
	
	printf("Id=%d\n",s.id);
	printf("Name=%d\n",s.name);
	printf("DOB=%d\n",s.d.day,s.d.month,s.d.year);
	printf("Percentage=%d\t,Grade=%c",s.p.percent,s.p.grade);
	return 0;
}
