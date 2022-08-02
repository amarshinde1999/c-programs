#include<stdio.h>


typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
	int iMask=0X00000040;
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
	
	
	iRet=ToggleBit(iValue);
	
	printf("Modified number is :%d",iRet);
	
	return 0;
}