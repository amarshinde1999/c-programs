#include<stdio.h>

void Display(int iNo)
{
	static int iCnt=5;
	if(iCnt>0)
	{
		printf("%d\t",iCnt);
		iCnt--;
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