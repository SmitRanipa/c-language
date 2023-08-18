#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter An Number :");
	scanf("%d" ,&a);
	printf("Enter An Number :");
	scanf("%d" ,&b);
	printf("Enter An Number :");
	scanf("%d" ,&c);
	
	if(a>b&&a>c){
		printf("a is Largest");
		}
	
	else if(b>c){
		printf("b is Largest");
	}
	
	else{
		printf("c is Largest");
	}
}
