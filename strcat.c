// Program to demonstrate strcat function string concatination.

#include<stdio.h>
#include<string.h>

void main()
{
	// Decleare two Strings.

	char one_string[] = "Java";
	char two_string[] = "Core";
	
	strcat(two_string, one_string);
	printf(two_string);
}