#include<stdio.h>
#include<conio.h>
int main(){
	int num,sum=0, firstDigit, lastDigit;
	printf("Enter the Number :");
	scanf("%d" ,&num);
	lastDigit = num%10;
	
	while(num>=10)
	{
		num= num/10;
	}
	firstDigit = num;
	sum = firstDigit +  lastDigit;
	
		printf("Sum of the first and last digit will be = %d :" ,sum);
	getch(); 
	return 0;
} 
