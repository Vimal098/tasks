#include<stdio.h>

int multiply();
int addition();
int subtraction();
int divide();

int main(){
	char ch;
	printf("Select your Operator:-");
	scanf("%c" ,&ch);
	if(ch=='*'){
		multiply();
	}
	else if(ch=='+'){
		addition();
	}
	else if(ch=='-'){
		subtraction();
	}
	else{
		divide();
	}
	return 0;
}
int multiply(){
	int a,b,c;
	printf("Enter the value of a:-");
	scanf("%d" ,&a);
		printf("Enter the value of b:-");
	scanf("%d" ,&b);
	c=a*b;
	printf("%d*%d=%d" ,a,b,c);
}
int addition(){
	int a,b,c;
	printf("Enter the value of a:-");
	scanf("%d" ,&a);
		printf("Enter the value of b:-");
	scanf("%d" ,&b);
		c=a+b;
	printf("%d+%d=%d" ,a,b,c);
}
int subtraction(){
	int a,b,c;
	printf("Enter the value of a:-");
	scanf("%d" ,&a);
		printf("Enter the value of b:-");
	scanf("%d" ,&b);
		c=a-b;
	printf("%d-%d=%d" ,a,b,c);
}
int divide(){
	int a,b,c;
	printf("Enter the value of a:-");
	scanf("%d" ,&a);
		printf("Enter the value of b:-");
	scanf("%d" ,&b);
		c=a/b;
	printf("%d/%d=%d" ,a,b,c);
}
