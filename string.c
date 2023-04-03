#include<stdio.h>
#include<string.h>
void main(){
	char str1[50];
	char str2[50];
	printf("Enter the name 1:\n\n");
	scanf("%s" ,&str1);
printf("Enter the name 2:\n\n");
scanf("%s" ,&str2);
	printf("%s" ,strcpy(str1,str2));

}
