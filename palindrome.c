#include<stdio.h>
#include<conio.h>

int main()
{
	int n, num, digit, sum = 0, rev = 0;
	printf("Enter the number...\n");
	scanf("%d",&num);
	n = num;
	do
	{
		digit = num % 10;
		sum = sum + digit;
		rev = rev * 10 + digit;
		num = num / 10;
	}while(num != 0);
		printf("Sum of digit of number = %d\n",sum);
		printf("Reverse of the number = %d\n",rev);
	if(n == rev)
	{
		printf("The number is a palindrome...!");
	}
	else
	{
		printf("The number is not a palindrome...!");
	}
	return(0);
}
// Another one logic to find number is palindrome or not.

#include<stdio.h>

int main()
{
	int num, rem = 0, n, sum = 0; // At initial state we need the number to check, 
									//n to store that number, 
									//rem to store the reminder and 
									//sum to store the revers number.
	printf("Please enter the number....\n"); // We are taking input from user.
	scanf("%d",&num); //Checking the inserted number.
	n = num; // Storeing the number in the n variable.
	
	while(n > 0) // Checkingcondition that if number is greater than 0, if yes loop will be executed.
	{
		rem = n % 10; // Taking reminder to get last digit of the number.
		sum = sum * 10 + rem;
		n = n / 10;
	}
	if(num == sum) // Chacking the entered number and the revers number is equal or not.
	{
		printf("The number is a palindrome"); // If number are same.
	}
	else
	{
		printf("The given number is not palindrome"); // If number is not same.
	}
	return(0);
}
