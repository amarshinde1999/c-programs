#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0
bool CheckEven(iNO)
{
	int iCnt=0;
	
  if((iNO%2)==0)
  {
	  return TRUE;
  }
  else
  {
	 return FALSE; 
  }
	
}

int main()
{
	int iValue=0;

	bool bRet=FALSE;

	printf("enter number\n");
	scanf("%d",&iValue);
	
	bRet=CheckEven(iValue);
	if(bRet==TRUE)
	{
	printf("number is even\n");
	}
	else
	{
	printf("number is odd\n");
	}


	return 0;
}


