#include<stdio.h>
main()
{
	char c;
	printf("Enter the character:");
	scanf("%c",&c);
	
	switch(c)
	{
		case 'a' : printf("Hello");
		break;
		
		case 'b' : printf("Hi there");
		break;
		
		case 'c' : printf("Byeee");
		break;
		
		default : printf("Sorry");
	}
}
