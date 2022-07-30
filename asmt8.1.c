#include<stdio.h>
#include<stdlib.h>
	

int Difference(int Arr[],int iLength)
{
	int iCnt=0,iSum=0,iSum1=0;
	int iDiff=0;
		
	for(iCnt=0; iCnt<iLength; iCnt++)
	{
		if(Arr[iCnt]%2==0)
		{
			iSum=iSum+Arr[iCnt];
		}
		else
		{
			iSum1=iSum1+Arr[iCnt];
		}
			
			
			
		}	
			
			
	return iSum-iSum1;
}

	int main()

	{
		int iSize=0;
		int iRet=0;
		int iCnt=0;
		int *p=NULL;
		
		
		printf("enter number of elements");
		scanf("%d",&iSize);
		
		p= (int *)malloc(sizeof(int)*iSize);
		
		if(p==NULL)
		{
			printf("unable to allocate memory");
			return -1;
		}
		
		for(iCnt=0; iCnt<iSize; iCnt++)
		{
			scanf("%d",&p[iCnt]);
		}
		
		iRet=Difference(p,iSize);
		printf("result is : %d",iRet);
		
		free(p);
		
		return 0;
	}