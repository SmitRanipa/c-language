#include<stdio.h>
void main()
{
	int n;
	printf("Enter A value Of Array :");
	scanf("%d",&n);
	int arr[n],i,*ptr;
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<n;i++){
		ptr=&arr[i];
		printf("%d",arr[i]);
	}
}
