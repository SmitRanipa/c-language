#include<stdio.h>
void main()
{
	int n,a;
	printf("Enter A Number :");
	scanf("%d" ,&n);
	
	a=n/10;
	
	if(a%2==0){
		printf("Number Is Even");
	}
	
	else{
		printf("Number Is Odd");
	}
}
