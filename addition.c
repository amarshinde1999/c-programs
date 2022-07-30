#include<stdio.h>
extern int addition();
int main()

{
	int a = 10;
	int b = 20;
	int ret = 0;
	
	ret = addition(a,b);
	
	printf("value of ret : %d\n",ret); 
	
	return 0;
}