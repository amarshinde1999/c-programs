#include<stdio.h>

int CountFour(int iNo)
{
	int iCnt=0,iDigit=0,iRev=0;
	while(iNo>0)
	{
		iDigit = iNo% 10;
		if(iDigit==4)
	{
		iCnt++;
	}
		iNo=iNo/10;
		
	}
	
	return iCnt;
}

int main()

{
	int iValue=0;
	int iRet=0;														
	
	printf("enter number");
	scanf("%d",&iValue);
	
	iRet=CountFour(iValue);
	printf("%d\n",iRet);
	
	return 0;
}