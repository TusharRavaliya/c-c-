#include<stdio.h>
main()
{
	int marks;
	
	printf("Enter you marks:");
	scanf("%d",&marks);
	
	if(marks>=40)
		{
			printf("You have passed.");
		}
			
		else if(marks>=50) 
		{
			printf("Can do better");
		}
		
		else if(marks>=60)
		{
			printf("Good");
		}
		
		else if(marks>=70)
		{
			printf("Very Good");
		}
		
		else if(marks>=80)
		{
			printf("Excellent");
		}
		
		else if(marks>=90)
		{
			printf("Outstand");
		}
		
	}


