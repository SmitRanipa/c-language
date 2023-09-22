#include<stdio.h>
void main()
{
	char c;
	printf("Enter An Character :");
	scanf("%c" ,&c);
	
	if(c>='A' && c<='Z'){
		printf("Character Is Upper Case");
	}
	
	else if(c>='a' && c<='z'){
		printf("Character Is Lower Case");
	}
	
	else if(c>='0' && c<='9'){
		printf("Character Is Numeric");
	}
	
	else{
		printf("Character Is Special");
	}
}
