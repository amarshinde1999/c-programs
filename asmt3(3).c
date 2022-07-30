#include<stdio.h>

void DisplayEvenfactor(int iNo)
{
	int i=0;
	if(iNo<=0)
	{
		iNo=-iNo;
	}
	for(i=1; i<=iNo/2; i++)
	{
		if((i%2==0) && (i<=iNo/2))
		{
			printf("%d",i);
		}			
	}
}
int main()
{
	int iValue=0;
	printf("enter number\n");
	scanf("%d",&iValue);
	
	DisplayEvenfactor(iValue);
	
	return 0;
}