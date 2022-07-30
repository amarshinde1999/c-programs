

#include<stdio.h>

void Pattern(int iNo)
{
	int iSum=1; 
	int iCount=1;
	
	
	while(iSum<=iNo)
	{
		if(iCount%2==0)
		{ 
			iSum=iSum+1;  
			printf("%d",iCount);
		}
		iCount++;
	}
	
}

	
	
int main()
{
	int iValue=0;

	printf("enter number of elements\n");
	scanf("%d",&iValue);
	
	Pattern(iValue);
	
	return 0;
}