#include<stdio.h>

int main()


{
	double no = 3.14;       //100
	                   
	double *a = &no;       //200
	
	double **b = &a;      //300
	
	double ***c = &b;    //400
	
	double ****d = &c;  //500
	
	
	printf("%d\n",&no);
	printf("%d\n",sizeof(d));
	printf("%d\n",&c);
	printf("%d\n",&d);
	printf("%d\n",d);
	printf("%d\n",**d);
	printf("%d\n",**c);
	printf("%d\n",*b);
	printf("%d\n",c);
	printf("%d\n",sizeof(a));
	printf("%d\n",sizeof(**c));
	printf("%d\n",sizeof(****d));
	return 0;
}