#include<stdio.h>
#include<stdlib.h>



int Frequency(int Arr[],int iLength,int iNo)
{
	int iCnt=0;
	int iSum=0;
	
	for(iCnt=0; iCnt<iLength; iCnt++)
	{
		if(Arr[iCnt]==iNo)
		{
			iSum++;
		}
		
		
	}
	return iSum;
	
	
}

int main()
{
	int iSize=0;
	int *P=NULL;
	int iCnt=0;
	int iRet=0,iValue=0;
	
	printf("enter the number of elements");
	scanf("%d",&iSize);
	
	printf("enter another number");
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
	
	iRet=Frequency(P,iSize,iValue);
	
	printf("result is:%d",iRet);
	
	free(P);
	
	return 0;
}