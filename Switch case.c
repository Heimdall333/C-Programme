#include <stdio.h>
int main()
{
	int a,b;
	printf("##Engineering##\n");
	printf("1.Computer Engineering Department\n");
	printf("2.IT Engineering Department\n");
	printf("Choose your department: ");
	scanf("%d",&a);
	
	switch(a)
	{
		case 1: printf("Welcome!!!\n");
		        printf("You are in Computer Engineering Department\n");
		        break;
		        
		case 2: printf("Welcome!!!\n");
		        printf("You are in IT Engeering Department\n");
				printf("1.Student login\n");
				printf("2.Staff login\n");
				printf("Choose your login ");
				scanf("%d",&b);    
				
				switch(b)
				{
					case 1: printf("Welcome!!!\n");
		                    printf("You are in Student profile\n");
		                    break;
		        
		            case 2: printf("Welcome!!!\n");
		                    printf("You are in Staff profile\n");
				            break;
		
		            default: printf("***Invalid Entry***\n");
				             break;
				}
		        break;
				
		default: printf("***Invalid Entry***\n");
				             break;		        
	}
	return 0;   
}
