#include<stdio.h>
#include<string.h>
int main()
{
	char Arr [5]= {'a','b','c','d','\0'};
	
	
	char Brr[5] = "abcd";
	
	printf("%s\n",Arr);
	printf("%s\n",Brr);
	
	
	printf("%c\n",Arr[0]);
	printf("%c\n",Arr[1]);
	printf("%c\n",Arr[2]);
	printf("%c\n",Arr[3]);
	printf("%c\n",Arr[4]);
	
	
	printf("%d\n",sizeof (Arr));
	printf("%d\n",sizeof (Brr));
	
	printf("%d\n",strlen(Arr));
	printf("%d\n",strlen(Brr));
	
	
	return 0;
}