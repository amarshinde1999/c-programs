#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

UINT ToggleBitRange(UINT iNo,int iStart,int iEnd)
{
	int iMask=0X00000001;
	int Result=0;
	
	iMask=iMask<<((iStart-1<=iEnd-1));
	
	Result=iNo ^iMask;
	
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
	
	
	iRet=ToggleBitRange(iValue,iLoc1,iLoc2);
	
	printf("After Togglebit : %d",iRet);
	
	return 0;
}