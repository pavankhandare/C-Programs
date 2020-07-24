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