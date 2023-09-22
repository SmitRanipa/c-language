#include<stdio.h>
void main()
{
	int x,y,z;
	
	printf("Enter An Number :");
	scanf("%d",&x);
	
	printf("Enter An Number :");
	scanf("%d",&y);
	
	printf("Enter An Number :");
	scanf("%d",&z);
	
	x>y?(x>z?printf("%d Is Largest",x):printf("%d Is Largest" ,z)):y>z?printf("%d Is Largest",y):printf("%d Is Largest",z);
	
}
