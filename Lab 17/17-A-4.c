#include<stdio.h>
void main()
{
	int a,b,*x,*y,*z;
	
	printf("Enter 1st Number :");
	scanf("%d",&a);
	printf("Enter 2nd Number :");
	scanf("%d",&b);
	
	x=&a;
	y=&b;
	
	z=&a;
	x=&b;
	y=&a;
	
	printf("Swap Number = %d\t",*x);
	printf("%d",*y);
}
