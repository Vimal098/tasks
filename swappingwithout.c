#include<stdio.h>
int main(){
	int a,b;
	printf("Enter the value of a:");
	scanf("%d" ,&a);
		printf("Enter the value of b:");
	scanf("%d" ,&b);
	printf("Before Swapping the value a and b was %d,%d\n" ,a,b);
	a=a-b;
	b=a+b;
	a=b-a;
	printf("\nafter Swapping the value of a and b become %d,%d" ,a,b);
	
	return 0;
}