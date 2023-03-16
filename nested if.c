#include<stdio.h>
int main(){
 int a,b,c;
 printf("Enter the value of a:-""\n");
 scanf("%d" ,&a);
 printf("Enter the value of b:-""\n");
 scanf("%d",&b);
 printf("Enter the value of c""\n");
 scanf("%d" ,&c);
 if(a>b){
 	if(a>c){
 		printf("A is Maximum.");
	 }
	 else{
	 	printf("C is maximum.");
	 }
 }
 else if(b>c){
 	printf("B is Maximum.");
 }
 else{
 	printf("C is maximum.");
 }
	return 0;
}