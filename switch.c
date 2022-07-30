#include<stdio.h>

int main()

{
	int iStd = 0;
	
	printf("Enter your standard\n");
	scanf("%d",&iStd);
	
	
	switch(iStd)
	
	{
		
		case 2:
			printf("Your Exam is at 8\n");
			
			break;
			case 11:
			printf("Your Exam is at 9\n");
			break;
			case 16:
			printf("Your Exam is at 10\n");
			break;
			case 12:
			printf("Your Exam is at 10\n");
			break;
			case 6:
			printf("Your Exam is at 11\n");
			break;
			case 7:
			printf("Your Exam is at 12\n");
			break;
			default:
			printf("Invalid standard");
	}
	
	return 0;
}

