#include<stdio.h>
int main(){
	int a,b,temp;
	printf("enter the value of a:");
	scanf("%d" ,&a);
	printf("enter the value of b:");
	scanf("%d" ,&b);
	printf("before swapping the value of a is %d\n" ,a);
	printf("before swapping the value of b is %d" ,b);
	temp=a;
	a=b;
	b=temp;
	printf("\nafter swapping the value of a is: %d" ,a);
	printf("\nafter swapping the value of b is: %d" ,b);
	return 0;

}