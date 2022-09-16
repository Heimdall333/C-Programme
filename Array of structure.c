#include<stdio.h>
struct employee
{
	char name[20];
	int eid;
	int salary;
};
int main()
{
	struct employee emp[3];
	printf("Employee detail\n");
	int i;
	for(i=0;i<3;i++)
	{
		printf("Enter employee name: ");
		scanf("%s",emp[i].name);
		
		printf("Enter employee id: ");
		scanf("%d",&emp[i].eid);
		
		printf("Enter emplyee salary: ");
		scanf("%f",&emp[i].salary);
		printf("\n");
	}
	printf("Printing the employee details.");
	
	for(i=0;i<3;i++)
	{
		printf("\nEmployee Name:%s",emp[i].name);
		printf("\nEmployee id:%d",&emp[i].eid);
		printf("\nEmployee Salary:%d\n\n",&emp[i].salary);
	}
	return 0;
}
