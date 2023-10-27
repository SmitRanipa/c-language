#include<stdio.h>
void main()
{
	int *ptr,x;
	
	printf("Enter A Value :");
	scanf("%d",&x);
	
	ptr=&x;
	
	printf("Adress = %d\n",ptr);
}
