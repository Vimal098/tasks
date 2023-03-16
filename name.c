#include<stdio.h>
void data(char name[],int age){
	printf("Youe name is %s, and your age is %d.\n" ,name,age);
}
int main(){
	data("Vimal",21);
	data("Shani",18);
	data("Ram",35);
	data("Anup",18);
	return 0;
}