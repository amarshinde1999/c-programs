#include<stdio.h>
#include<stdlib.h>


void Range(int Arr[],int iLength,int iStart,int iEnd)
{
	int iCnt=0;
	int iSum=0;
	int iSum1=0;
	int iSum2=0;
	
	for(iCnt=0; iCnt<iLength; iCnt++)
	{
		if((Arr[iCnt]>iStart) && (Arr[iCnt]<iEnd))
		{
		   printf("%d",Arr[iCnt]);
		   
		   
		}
		
		
	}
		
		
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
	
	printf("enter start number ");
	scanf("%d",&iValue1);
	
	printf("enter end number ");
	scanf("%d",&iValue2);
	
	
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
	
	Range(P,iSize,iValue1,iValue2);
	
	free(P);
	
	return 0;
}