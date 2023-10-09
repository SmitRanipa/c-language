#include<stdio.h>
void main()
{
	int i,x,y,ans=1;
	
	printf("Enter A Value Of X :");
	scanf("%d",&x);
	
	printf("Enter A Value Of Y :");
	scanf("%d",&y);
	
	for(i=1;i<=y;i++)
	{
		ans=ans*x;
	}
	printf("%d",ans);
}
