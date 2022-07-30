#include<stdio.h>
int main ()
{
	int arr = 11;
	
	int brr = 10;
	int crr = {11,21,51,101,111};
	
	printf("value of arr : %d\n",arr);
	
	printf("value of brr : %d",brr);
	printf("size of arr: %d\n",sizeof(arr));
	printf("adress of crr:%d\n",&crr);
	printf("adress of brr : %u\n",&brr);
	printf("adress of crr : %u\n",&crr);
	printf("value of brr : %c\n",brr);
	
	
	return 0;
}
	
	
