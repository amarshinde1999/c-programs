#include<stdio.h>

void Pattern(int iRow,int iCol)
{
	int i=0;
	int j=0,k=0;
	char ch='\0';
	
	
	for(i=1; i<=iRow; i++)
	{
	  
		for(j=1,k=-1; j<=4; j++,k--)
		{
			if(i%2==0)
			{
				printf("%d\t",k);
				
			}
			else
			{
				printf("%d\t",j);
			}
			
		}
		 
		printf("\n");
		
			
		
		
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

