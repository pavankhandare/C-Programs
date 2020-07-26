// Demonstrating the use of the structure in C programming.

#include<stdio.h>

void main()
{
	struct person // Defining structure
	{
		char name[30]; // Initializing structure members.
		int age;
		float salary;		
	};
	struct person person1 = {"Pavan Khandare", 23, 15000}; // Declearing structure variable.
	printf("Person Name : %s    Age : %d    Salary : %f\n",person1.name, person1.age, person1.salary); 
	
	struct date
	{
		int day;
		char month[20];
		int year;
	};
	
	// Another example of declaring structure within structure
	struct employee
	{
		int empID;
		struct date joindate; // Initializing structure within structure to access the member of the another structure
		struct person person2; // Structure person in structure employee.
	};
	
	// Declearing the structure member of both of three structure in one structure
	struct employee employee1 = {123, 15, "August", 2015, "Rupali Ingle", 20, 25500};	
	
	// Printing all the members.
	printf("Employee ID : %d\nJoining Date : %d / %s / %d\nEmployee Name : %s\nAge : %d\nSalary : %f",
	employee1.empID, employee1.joindate.day, employee1.joindate.month, employee1.joindate.year,
	employee1.person2.name, employee1.person2.age, employee1.person2.salary);
}

Output :
Person Name : Pavan Khandare    Age : 23    Salary : 15000.000000
Employee ID : 123
Joining Date : 15 / August / 2015
Employee Name : Rupali Ingle
Age : 20
Salary : 25500.000000
