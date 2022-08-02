#include<stdio.h>

void Display(int iNo)
{
	static int iCnt=1;
	if(iCnt<=iNo)
	{
		printf("%d\t",iCnt);
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