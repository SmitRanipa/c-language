#include<stdio.h>
void main()
{
	int i,n1=1,n2=2,n3,num;
	
	printf("Enter A Number :");
	scanf("%d",&num);
	
	for (i=1;i<=num;i++)
	{
		printf("%d\t",n1);
		
		n3=n1+n2;
		n2=n1;
		n1=n3;
	}
}
