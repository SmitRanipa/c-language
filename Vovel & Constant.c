#include<stdio.h>
void main()
{
	char alpha;
	printf("Enter A alpha :");
	scanf("%c" , &alpha);
	if (alpha=='a'||alpha=='e'||alpha=='i'||alpha=='o'||alpha=='u'||alpha=='A'||alpha=='E'||alpha=='I'||alpha=='O'||alpha=='U'){
		printf("Character Is Vovel");
	}
	else{
		printf("Character Is Constant");
	}
}
