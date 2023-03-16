#include<stdio.h>
void vimal();
void dadu();
int main(){
	char ch;
	printf("Enter v for Vimal:-");
	scanf("%c" ,&ch);
	if(ch=='v'){
	vimal();
}
	else{
		dadu();
		
	}
		return 0;
	}
		void vimal(){
			printf("hello I am Vimal");
			
		}
void dadu(){
	printf("hello I am prashant");
}
