#include<stdio.h>


typedef unsigned int UINT;

UINT OnBit(UINT iNo)
{
	int iMask=0X0000000F;
	int Result=0;
	
	Result=iNo | iMask;
	
	return Result;
}

int main()
{
	int iValue=0;;
	int iRet=0;
	
	printf(" enter number ");
	scanf("%d",&iValue);
	
	
	iRet=OnBit(iValue);
	
	printf("Modified number is :%d",iRet);
	
	return 0;
}