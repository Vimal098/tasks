#include<stdio.h>
int main(){
	int a,b,temp;
	printf("Enter the value of a:");
	scanf("%d" ,&a);
		printf("Enter the value of b:");
	scanf("%d" ,&b);
	printf("Before Swapping the value of a and b was %d,%d\n" ,a,b);

temp=a;
a=b;
b=temp;	
	printf("\nAfter Swapping the value of a and b become %d,%d" ,a,b);
	
	
	return 0;
}


