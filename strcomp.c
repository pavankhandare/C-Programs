// C program to demonstrate the strcmp() to compare two strings.

#include<stdio.h>
#include<string.h> // Including string header file to use strcmp().

void main()
{
	char str1[20], str2[20]; // Declearing two Strings.
	int cmpresult;
	printf("Enter the two strings...\n");
	scanf("%s%s",&str1, &str2);
	cmpresult = strcmp(str1, str2); // Comparing the strings.
	if(cmpresult < 0)
	{
		printf("%s is less than %s", str1, str2);
	}
	else if(cmpresult == 0)
	{
		printf("%s is equal %s", str1, str2);
	}
	else
	{
		printf("%s is greater then %s", str1, str2);
	}
}