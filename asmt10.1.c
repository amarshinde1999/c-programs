#include<stdio.h>
#include<stdlib.h>

#define TRUE 1;
#define FALSE 0;
typedef int BOOL;

BOOL Check(int Arr[],int iLength,int iNo)
{
	int iCnt=0;
	int iSum=0;
	
	for(iCnt=0; iCnt<iLength; iCnt++)
	{
		if(Arr[iCnt]==iNo)
		{
			return 1;
		}
		
		
	}
	
	
	
}

int main()
{
	int iSize=0;
	int *P=NULL;
	int iCnt=0;
	BOOL bRet=FALSE;
	int iValue=0;
	
	printf("enter the number of elements");
	scanf("%d",&iSize);
	
	printf("enter the another number");
	scanf("%d",&iValue);
	
	
	P=(int *)malloc(sizeof(int)*iSize);
	
	if(P==NULL)
	{
		printf("unable to allocate memory");
		return -1;
	}
	
	for(iCnt=0;iCnt<iSize; iCnt++)
	{
		scanf("%d",&P[iCnt]);
	}
	
	bRet=Check(P,iSize,iValue);
	
	if(bRet==1)
	{
		printf("number is present");
	}
	else
	{
		printf("number is not present");
	}
	
	free(P);
	
	return 0;
}