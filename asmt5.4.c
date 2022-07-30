#include<stdio.h>


int SumNonFact(int iNo)
{
	int iCnt=0;
	int Sum=0;
	
	
	for(iCnt=1; iCnt<=iNo; iCnt++)
	{
		if(iNo%iCnt!=0)
		{
			Sum=Sum+iCnt;
		}
		
		
	}
	return Sum;
	
}

int main()
{
	int iValue=0;
	int iRet=0;
	
	
	printf("enter number\n");
	scanf("%d",&iValue);
	
	iRet=SumNonFact(iValue);
	printf("%d",iRet);

	
	return 0;
	
}