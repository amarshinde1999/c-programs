#include<stdio.h>

void Pattern(int iRow,int iCol)
{
	int i=0;
	int j=0;

	
	
	for(i=1; i<=iRow; i++)
	{
	   
		for(j=iCol; j>=1; j--)
		{
		if((i==j)||(i==1)||(j==1)||(i==iRow)||(j==iCol))
			{
				printf("*\t");
			}
			
			else
			{
				printf(" \t");
			}
			
		}printf("\n");
		
	}
} 
	
	
int main()
{
	int iValue1=0;
	int iValue2=0;
	
	printf("enter number of rows and columns");
	scanf("%d,%d",&iValue1,&iValue2);
	
	Pattern(iValue1,iValue2);
	
	return 0;
}
