#include<stdio.h>
void main()
{
	int a,b,c,d;
	
	printf("Enter 1st Number :");
	scanf("%d",&a);
	printf("Enter 1st Number :");
	scanf("%d",&b);
	printf("Enter 1st Number :");
	scanf("%d",&c);
	
	d=a>b?1:0;
	
	switch(d){
		
		case 1: 
			printf("%d",a*c);
			break;
			
		case 2: 
			printf("%d",b*c);
			break;
	}	
}
