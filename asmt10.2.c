#include<stdio.h>
#include<stdlib.h>


int FirstOcc(int Arr[],int iLength,int iNo)
{
	int iCnt=0;
	int iSum=0;
	
	for(iCnt=0; iCnt<iLength; iCnt++)
	{
		if(Arr[iCnt]==iNo)
		{
			break;
		}
	}
		if(iCnt==iLength)
		{
			return -1;
		}
		else
		{
			return iCnt;
		}
		
}

int main()
{
	int iSize=0;
	int *P=NULL;
	int iCnt=0;
	int iRet=0;
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
	
	iRet=FirstOcc(P,iSize,iValue);
	
	if(iRet==-1)
	{
		printf("there is no such number");
	}
	else
	{
		printf("number is occured at:%d",iRet);
	}
	
	free(P);
	
	return 0;
}