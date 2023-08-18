#include<stdio.h>
void main()
{
	int a;
	printf("Enter An Number :");
	scanf("%d" ,&a);
	if(a>0){
		printf("Number Is Positive");
	}
	else if(a<0){
		printf("Number Is Negative");
	}
	else {
		printf("Number Is 0");
	}
}
