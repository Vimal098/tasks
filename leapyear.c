#include<stdio.h>
int main(){
	int year;
	printf("Enter the Year:");
	scanf("%d" ,&year);
	if(year%400==0){
		printf("%d is having a leap year." ,year);
	}
	else if(year%100==0){
		printf("%d is not having a leap year." ,year);
		
	}
	else if(year%4==0){
		printf("%d is having leap a year.",year);
	}
	
	else{
		printf("%d is not having a leap year." ,year);
	}
	return 0;
}