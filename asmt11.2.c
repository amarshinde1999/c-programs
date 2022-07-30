#include<stdio.h>
#include<stdlib.h>

#define TRUE 1;
#define FALSE 0;
typedef int BOOL;

BOOL Minimum(int Arr[],int iLength)
{
	int iCnt=0;
	int iMin=Arr[iCnt];
	
	
	for(iCnt=0; iCnt<iLength; iCnt++)
	{
		if(iMin>Arr[iCnt])
		{
			iMin=Arr[iCnt];
		}
	}
	
		return iMin;	
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
	
	iRet=Minimum(P,iSize);
	
	printf("Smallest number is : %d",iRet);
	
	free(P);
	
	return 0;
}