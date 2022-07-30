#include<stdio.h>

int CountDiff(int iNo)
{
	int iCnt=0,iDigit=0,jCnt=0;
	int iDiff=0;
	
	while(iNo>0)
	{
		iDigit = iNo% 10;
		if(iDigit%2==0)
		{
			iCnt++;
		}
		else
		{
			jCnt++;
		}
		
	
		iNo=iNo/10;

		
	}
	
	
	return iCnt-jCnt;
}

int main()

{
	int iValue=0;
	int iRet=0;														
	
	printf("enter number");
	scanf("%d",&iValue);
	
	iRet=CountDiff(iValue);
	printf("%d\n",iRet);
	
	return 0;
}