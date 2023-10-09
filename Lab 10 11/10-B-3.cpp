#include<stdio.h>
void main()
{
	int rev=0,n,rem,org;
	
	printf("Enter A Number :")
	scanf("%d",&n);
	org=n;
	
	while(n=!0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	if(org==rev)
	{
		printf("%d Is Pelindrom" ,org);
	}
	else{
		printf("%d Is Not Pelindrom",org);
	}
}
