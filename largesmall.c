// Checking the largest and smallest element in the array.

#include<stdio.h>
int main()
{
	int i, n; // Initializing the first variables.
	float a[50], large, small; // Declearing the array and its max size.
	
	printf("Enter the size of the Array\n");
	scanf("%d",&n);
	printf("Enter the array element\n");
	for(i = 0; i < n; i++)
	{
		scanf("%f",&a[i]);
	}
	// Initialization
	large = a[0];
	small = a[0];
	
	// Checking largest and smallest element
	for(i = 1; i < n; i++)
	{
		if(a[i] > large)
		{
			large = a[i]; // Assigning large value
		}
		else if(a[i] < small)
		{
			small = a[i]; // Assigning small value
		}
	}
	printf("The Largest element = %f\n",large);
	printf("The Smallest element = %f",small);
}