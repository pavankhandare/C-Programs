#include<stdio.h>

int main(){
	int sum, num, marks, average;
	int sum = 0;
	int num = 0;
	clrscr();
	printf("Enter the Marks and -1 to terminate : \n");
	scanf("%d",&marks);
	while(marks != -1){
		sum = sum + marks;
		num++;
		scanf("%d",&marks);
	}
	average = sum / num;
	printf("Average of Marks is %d",average);
	return(0);
	getch();
}