#include<stdio.h>
#include"amar.h"

int main()
{
	struct Demo obj;
	
	printf("Inside main\n");
	printf("value of macro is : %d\n",MAX);
	printf("size of structure is : %d\n",sizeof(obj));
	
	fun();
	
	return 0;
	
	
}
void fun()
{
	printf("inside fun\n");
}