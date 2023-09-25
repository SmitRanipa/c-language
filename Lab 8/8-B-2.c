#include<stdio.h>
void main()
{
	int i=101,n=199;
		
	while(i<=n)
	{
		if(i%7==0 && i%5!=0)
		{
			printf("%d\n",i);
		}
		i++;
	}
}
