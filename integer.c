#include<stdio.h>
int main(){
	int m,n;
	printf("Enter two integers:-\n");
	printf("Enter the value of integer1:-");
	scanf("%d" ,&m);
		printf("Enter the value of integer2:-");
	scanf("%d" ,&n);
	if(m==n){
		printf("Integer1 is Equal to Integer2.");
		
	}
	else{
		printf("Integer1 is not Equal to Integer2.");
	}
	
	return 0;
}