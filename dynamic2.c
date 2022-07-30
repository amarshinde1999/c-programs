#include<stdio.h>
#include<stdlib.h>

int main()
{
	int size = 0;
	int *ptr = NULL;
	
	printf("Enter number of elements:");
	scanf("%d",&size);
	
	ptr = (int*)calloc(size , sizeof(int));
	if(ptr == NULL)
	{
		printf("unable to alocate memory\n");
	}
	else
	{
		printf("memory succesfully allocated\n");
		

	}
	return 0;
}