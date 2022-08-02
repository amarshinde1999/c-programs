#include<stdio.h>


typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
	int iMask=0X00000240;
	int Result=0;
	
	Result=iNo ^ iMask;
	
	return Result;
}

int main()
{
	int iValue=0;;
	int iRet=0;
	
	printf(" enter number ");
	scanf("%d",&iValue);
	
	
	iRet=OffBit(iValue);
	
	printf("Modified number is :%d",iRet);
	
	return 0;
}