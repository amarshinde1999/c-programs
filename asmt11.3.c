#include<stdio.h>
#include<stdlib.h>

#define TRUE 1;
#define FALSE 0;
typedef int BOOL;

BOOL Difference(int Arr[],int iLength)
{
	int iCnt=0;
	int iMin=Arr[iCnt];
	int iMax=0;
	
	
	for(iCnt=0; iCnt<iLength; iCnt++)
	{
		if(iMin>Arr[iCnt])
		{
			iMin=Arr[iCnt];
		}
		
		else if(iMax<Arr[iCnt])
		{
			iMax=Arr[iCnt];
		}
	}
	
		return iMax-iMin;	
}

int main()
{
	int iSize=0;
	int *P=NULL;
	int iCnt=0;
	BOOL iRet=0;
	int iValue1=0,iValue2=0;
	
	printf("enter the number of elements");
	scanf("%d",&iSize);
	
	
	
	P=(int *)malloc(sizeof(int)*iSize);
	
	if(P==NULL)
	{
		printf("unable to allocate memory");
		return -1;
	}
	
	for(iCnt=0; iCnt<iSize; iCnt++)
	{
		scanf("%d",&P[iCnt]);
	}
	
	iRet=Difference(P,iSize);
	
	printf("Difference is : %d",iRet);
	
	free(P);
	
	return 0;
}