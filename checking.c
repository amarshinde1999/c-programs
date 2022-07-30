#include<stdio.h>






struct demo
{
	int ivalue;
	float f=10.01;
	double d;
};


int main()


{
	
	struct demo obj;
	
	obj.ivalue;
	obj.f=10.01;
	obj.d;
	
	
	printf("%d\n",obj.ivalue);
	printf("%d\n",obj.f);
	printf("%d\n",obj.d);
	
	return 0;
}