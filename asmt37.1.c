#include<stdio.h>

void Display(int iNo)
{
	static int iCnt=0;
	if(iCnt<iNo)
	{
		printf("*\t");
		iCnt++;
		Display(iNo);
		
	}
}


int main()
{
	
	int iValue=0;
	printf(" enter number ");
	scanf("%d",&iValue);
	
	Display(iValue);
	
	return 0;
}