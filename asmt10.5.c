#include<stdio.h>
#include<stdlib.h>


int Product(int Arr[],int iLength)
{
	int iCnt=0;
	int iSum=1;
	int iSum1=0;
	
	for(iCnt=0; iCnt<iLength; iCnt++)
	{
		if(Arr[iCnt]%2!=0)
		{
		  iSum=iSum*Arr[iCnt];
		}
		
	}
		return iSum;
		
}

int main()
{
	int iSize=0;
	int *P=NULL;
	int iCnt=0;
	int iRet=0;
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
	
	iRet=Product(P,iSize);
	
	printf("product is : %d",iRet);
	
	free(P);
	
	return 0;
}