#include<stdio.h>
int main(){
	int n, num;
	printf("Enter the Number.");
	scanf("%d" ,&num);
	for(n=1; n<=num; n++){
		if(num%n==0){
			printf("%d\n" ,n);
		}
	}
	return 0;
}
