#include<stdio.h>
int main(){
	int marks[5];
	printf("Enter 5 Value:\n");
	for(int i=0; i<5; i++){
		scanf("%d" ,&marks[i]);
	}
	for(int i=0; i<5; i++){
		printf("%d\t" ,marks[i]);
	}
	
	return 0;
}