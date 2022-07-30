#include<stdio.h>

Display(iNo)
{
	while(iNo>-0)
	{
		printf("*");
		iNo--;
	}	
}


int main()
{
	int iValue=0;
	
	printf("enter the number");
	scanf("%d",&iValue);
	
	Display(iValue);
	
	return 0;
}