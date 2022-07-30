#include<stdio.h>


int FactDiff(int iNo)
{
	int iCnt=0;
	int Sum=0;
	int Sum1=0;
	int Diff=0;
	
	
	for(iCnt=1; iCnt<iNo; iCnt++)
	{
		if(iNo%iCnt==0)
		{
			Sum=Sum+iCnt;
		}
	}
	for(iCnt=1; iCnt<=iNo; iCnt++)
	{
		  if(iNo%iCnt!=0)
		{
			Sum1=Sum1+iCnt;
		}
		
		
		
	}
	Diff=Sum-Sum1;
	return Diff;
	
}

int main()
{
	int iValue=0;
	int iRet=0;
	
	
	printf("enter number\n");
	scanf("%d",&iValue);
	
	iRet=FactDiff(iValue);
	printf("%d",iRet);

	
	return 0;
	
}