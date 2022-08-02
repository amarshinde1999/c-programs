#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

UINT OffBit(UINT iNo,int iPos)
{
	int iMask=0X00000001;
	int Result=0;
	
	iMask=iMask<<(iPos-1);
	
	Result=iNo ^ iMask;
	
	return Result;
	
}

int main()
{
	int iValue=0;
	int iLoc=0;
	
	int iRet=0;
	
	printf(" enter number ");
	scanf("%d",&iValue);
	
	printf(" enter position ");
	scanf("%d",&iLoc);
	
	
	iRet=OffBit(iValue,iLoc);
	
	printf("modified number is : %d",iRet);
	
	return 0;
}