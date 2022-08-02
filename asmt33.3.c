#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

BOOL ChkBit(UINT iNo)
{
	
	int iMask=0X00000900;
	int Result=0;

	
	Result=iNo & iMask;

	return Result;
	
}

int main()
{
	int iValue=0;
	int iRet=0;
	
	printf(" enter number ");
	scanf("%d",&iValue);
	
	
	iRet=ChkBit(iValue);
	
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