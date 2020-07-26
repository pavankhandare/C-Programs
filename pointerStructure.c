// Demonstrating the use of the pointer in the structure.

#include<stdio.h>

void main()
{
	// Defining strcture
	struct employee
	{
		char name[20];
		int age;
		int salary;
	};
	
	// Initializing the structure variable.
	struct employee emp = {"Pavan", 23, 21000};
	
	// Initializing pointer to the structure
	struct employee *ptr = &emp;
	
	// Accessing the element in the structure emp using pointer.
	printf("Structure emp Address : %x\nAccessing element : Name : %s   Age : %d    Salary : %d",ptr,ptr->name, ptr->age, ptr->salary);
}

Output : 
Structure emp Address : 60fd44
Accessing element : Name : Pavan   Age : 23    Salary : 21000