// Demonstrating the array of the structure.

#include<stdio.h>

// Initializing the structure before the main method, This is another way to initializing structure. 
struct employee
{
	char name[20];
	int age;
	int salary;
};

void main()
{
	// Initializing array of structure employee.
	struct employee emp[10] = {{"Pavan", 23, 25000},{"Rupali", 22, 50000},{"Rupesh", 20, 12000}};
	// Printing the name of first employee, salary of third employee and fourth character of name of second employee.
	printf("%s   %d   %c",emp[0].name, emp[2].salary, emp[1].name[3]);
}

Output : 
Pavan   12000   a
