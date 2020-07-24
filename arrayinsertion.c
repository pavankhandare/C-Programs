// Demonstrating the insertion of an element in the array at the given position.

#include<stdio.h>

void main()
{
	int i, j, k, n, pos;
	int a[50], item;
	printf("Size of an array...\n"); // Declearing the size of an array.
	scanf("%d",&n);
	printf("Array Element..\n");
	for(i = 0; i < n; i++)
	{
		scanf("%d",&a[i]); // Inserting the array element in sequence.
	}
	printf("Array Elements\n");
	for(i = 0; i < n; i++)
	{
		printf("%d",a[i]); // Printing array.
		printf(" - ");
	}
	printf("\nPlease enter the element to insert in the array \n");
	scanf("%d",&item);
	printf("Position of the element you want to insert...\n");
	scanf("%d",&pos);
	while(pos > n+1)
	{
		printf("Please enter the value less than %d : ",n+2);
		scanf("%d",&pos);
	}
	n++; // incresing the array size.
	for(k = n; k >= pos; k--)
	{
		a[k] = a[k-1];
	}
	a[--pos] = item; // Item inserted.
	printf("Array after the new element insertion...\n");
	for(i = 0; i < n; i++)
	{
		printf("%d",a[i]); // Printing array.
		printf(" - ");
	}
}