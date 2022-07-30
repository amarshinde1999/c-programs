#include<stdio.h>

int main()
{
	int ivalue = 11;
	char cvalue = 'A';
	float fvalue = 10.11;
	double dvalue = 20.11;
	
	void *ptr = NULL;
	
	ptr = &ivalue;
	printf("%d\n",*(int*)ptr); //11
	
	ptr = NULL;
	ptr = &fvalue;
	
	printf("%f\n",*(float*)ptr); //10.11
	
	ptr = NULL;
	ptr = &cvalue;
	
	printf("%c\n",*(char*)ptr);  //A
	
	return 0;
	
}
	