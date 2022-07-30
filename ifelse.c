#include<stdio.h>
int main()
{

int iStd = 0;

printf("Enter Your standard\n");
scanf("%d",&iStd);

if(iStd == 1)
{
	printf("Your Exam is at 8\n");

}
else if(iStd==2)
{
	printf("Your Exam is at 9\n");
	
}
else if(iStd==3)
{
	printf("your Exam is at 10\n");
	
}
else if(iStd==4)
{
	printf("Your Exam is at 11\n ");
	
}
else
{
	printf("Invalid Standard");
	
}








return 0;
}