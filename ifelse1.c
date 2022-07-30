
#include<stdio.h>

int main()
////////////////////////////////////////////
//0-10 your ticket is 100              ////
//10-40 your ticket is 500            ////
//40 and above youe ticket is 300     ///
////////////////////////////////////////

{

	auto int iAge = 0;
	
	printf("Enter Your age\n");
	scanf("%d",&iAge);
	
														
	if((iAge>=0) && (iAge<=10))
	{
		printf("Your Ticket ammount is 100\n");
	}
	else if((iAge>10) && (iAge<=40))
	{ 
		printf("Your Ticket ammount is  500\n");
	}
	else if(iAge>40) 
	{
		printf("Your Ticket ammount is  300\n");
	}




	return 0;
	
}