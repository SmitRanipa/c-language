#include<stdio.h>
void main()
{
	int a,b,*x,*y;
	
	printf("Enter Value Of A And B:");
	scanf("%d %d",&a,&b);
	
	x=&a;
	y=&b;
	
	printf("Sum = %d",a+b);
}
