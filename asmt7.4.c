#include<stdio.h>

int MultDigits(int iNo)
{
	int iCnt=0,iDigit=1,iMult=1;
	while(iNo>0)
	{
		iDigit = iNo% 10;
		iMult=iMult*iDigit;
	
		iNo=iNo/10;
		
	}
	
	return iMult;
}

int main()

{
	int iValue=0;
	int iRet=0;														
	
	printf("enter number");
	scanf("%d",&iValue);
	
	iRet=MultDigits(iValue);
	printf("%d\n",iRet);
	
	return 0;
}