#include<stdio.h>
void main()
{
	char ch;
	
	printf("Enter A Character :");
	scanf("%c",&ch);
	
	(ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')?printf("Character Is Alphabet"):printf("Character Is Not Alphabet");
}
