#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
	int iMask=0XF000000F;
	int Result=0;

	
	Result=iNo ^ iMask;
	
	return Result;
	
}

int main()
{
	int iValue=0;
	int iRet=0;
	
	printf(" enter number ");
	scanf("%d",&iValue);
	
	
	iRet=ToggleBit(iValue);
	
	printf("modified number is : %d",iRet);
	
	return 0;
}