#include<stdio.h>
int main(){
	int n;
	printf("Enter the Size of array:-");
	scanf("%d" ,&n);
	int array[n];
	int length =sizeof(array)/sizeof(array[0]);
	printf("the elements of array is\n");
	for(int i=0; i<length; i++){
		scanf("%d" ,&array[i]);
	}
	
	printf("the elements of array is\n");
	for(int i=0; i<length; i++){
		printf("%d\t" ,array[i]);
	}
	
	
	
		return 0;
}