#include<stdio.h>
int vimal();
int sagar();

int main(){
	char n;
	printf("enter the value of n:");
	scanf("%c" ,&n);
	if(n=='v'){
	vimal();
		
	}
	else {
		sagar();
	}

	return 0;
}
int vimal(){
	printf("Hello My Name is Vimal:");
}
int sagar(){
	printf("Hello MY Name is Sagar:");
}
