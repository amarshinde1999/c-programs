#include<stdio.h>

int CountTwo(int iNo)
{
	int iCnt=0,iDigit=0,iRev=0;
	while(iDigit<=iNo)
	{
		iDigit = iNo% 10;
		if(iDigit==2)
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
	
	iRet=CountTwo(iValue);
	printf("%d\n",iRet);
	
	return 0;
}