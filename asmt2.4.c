#include<stdio.h>

int Display(int iNo,int iFrequency)
{
	iNo=0;
	iFrequency=0;
	
	int iCnt=0;
	
	for( iCnt=1; iCnt=iFrequency; iCnt++ )
	{
		printf("%d",iNo);
	}
	if(iCnt=iFrequency)
	{
		return iFrequency;
	}
	
}

int main()
{
	int iValue=0;
	int iCount=0;
	
	printf("enter number");
	scanf("%d",&iValue);
	
	printf("enter frequency");
	scanf("%d",&iCount);
	
	Display(iValue,iCount);
	
	
	return 0;
}