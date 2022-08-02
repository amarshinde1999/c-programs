#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

BOOL ChkBit(UINT iNo,int iPos1,int iPos2)
{
	int iMask=0X00000001;
	int Result=0;
	
	iMask=iMask<<((iPos1-1)||(iPos2-1));
	
	Result=iNo & iMask;
	
	return Result;
	
}

int main()
{
	int iValue=0;
	int iLoc1=0;
	int iLoc2=0;
	
	int iRet=0;
	
	printf(" enter number ");
	scanf("%d",&iValue);
	
	printf(" enter position 1 ");
	scanf("%d",&iLoc1);
	
	printf(" enter position 2 ");
	scanf("%d",&iLoc2);
	
	
	iRet=ChkBit(iValue,iLoc1,iLoc2);
	
	if(iRet==0)
	{
		printf("FALSE");
	}
	else
	{
		printf("TRUE");
	}
	
	return 0;
}