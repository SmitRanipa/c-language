#include<stdio.h>
void main()
{
	int *ptr1, w=10;
	float *ptr2, x=5.20;
	double *ptr3, y=10.10202;
	char *ptr4, z='S'; 
	
	ptr1=&w;
	ptr2=&x;
	ptr3=&y;
	ptr4=&z;
	
	printf("Int Adress=%d\n",ptr1);
	printf("Float Adress=%d\n",ptr2);
	printf("Double Adress=%d\n",ptr3);
	printf("Char Adress=%d\n",ptr4);
}
