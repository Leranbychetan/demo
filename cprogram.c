#include<stdio.h>
#include<stdlib.h>
// dynamic memory allocation by reallooc function
void main()
{
	int *ptr,*newptr,i;
	ptr=(int*)malloc(5*sizeof(int));
	printf("memory address :");
	for (i=0;i<5;i++)
	{
		printf("%d ",ptr+i);
		
	}
    newptr=realloc(ptr,7*sizeof(int));// here ptr is first address of ptr
	printf("\nmemory address after realloc :");
		for (i=0;i<7;i++)
	{
		printf("%d ",newptr+i);
	}
	free(ptr);// after free memory, pointer become dangling poinbter 
	
}
