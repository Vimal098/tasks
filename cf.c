#include<stdio.h>
void vimal();
void shani();
int main(){
	char ch;
	printf("Select your Operator:-");
	scanf("%c" ,&ch);

	if(ch=='+'){
		vimal();
	}
	else{
		shani();
	}
	return 0;
}
void vimal(){
	int a,b,c;
		printf("Enter the value of a:-");
	scanf("%d" ,&a);
	printf("Enter the value of b:-");
	scanf("%d" ,&b);
	c=a+b;
	printf("%d+%d=%d" ,a,b,c);
}
void shani(){
	int a,b,c;
		printf("Enter the value of a:-");
	scanf("%d" ,&a);
	printf("Enter the value of b:-");
	scanf("%d" ,&b);
	c=a-b;
	printf("%d-%d=%d" ,a,b,c);
}