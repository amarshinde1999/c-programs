#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;
typedef unsigned int UINT;

BOOL ChkBit(UINT iNo)
{
	int iMask=0X08104040;
	int Result=0;
	
	Result=iNo & iMask;
	
	
	if(Result==0)
	{
		return FALSE;
	}
	else
	{
		return TRUE;
	} 
}

int main()
{
	int iValue=0;;
	int iRet=0;
	
	printf(" enter number ");
	scanf("%d",&iValue);
	
	
	iRet=ChkBit(iValue);
	if (iRet==FALSE) 
	{
		printf("Bit is Off");
	}
	else
	{
		printf(" Bit is On ");
	}
	
	return 0;
}