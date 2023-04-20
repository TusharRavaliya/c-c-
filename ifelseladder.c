#include<stdio.h>
 int main()
{
	int marks;
	
	printf("Enter you marks:");
	scanf("%d",&marks);
	
	if(marks>90)
		{
			printf("You have passed.");
		}
			
  else if(marks>80) 
		{
			printf("Can do better");
		}
		
 else if(marks>70)
		{
			printf("Good");
		}
		
 else if(marks>60)
		{
			printf("Very Good");
		}
		
 else if(marks>50)
		{
			printf("Excellent");
		}
		
 else if(marks>40)
		{
			printf("Outstand");
		}
		
	
}


