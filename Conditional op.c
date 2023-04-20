// Conditional operators

#include<stdio.h>

main() 
{
	int a,b,h;
	
	printf("Enter two values :\n");
	scanf("%d%d",&a, &b);
	
	h = a>b ? a:b;

	printf("The maximum number is:%d",h);
}

