#include<stdio.h>
void main()
{
	int i,n,digit;
	int count=0;
	
	printf("Enter A Value : ");
	scanf("%d",&n);
	
	while(n!=0)
	{
		digit=n%10;
		n=n/10;
		count++;
		
	}
	
	printf("%d",count);
}
