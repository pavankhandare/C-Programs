// Demonstrating the continue statement in C.

#include<stdio.h>

void main()
{
	int i = 0, sum = 0, num;
	for(i = 0; i < 5; i++)
	{
		printf("Please enter the number...! ");
		scanf("%d",&num);
		if(num < 0)
		{
			puts("Please enter the positive number... \n");
			continue;
		}
		sum += num;
	}
	printf("The sum of positive number entered = %d\n",sum);
}