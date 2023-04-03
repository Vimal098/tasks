#include<stdio.h>
void fibo();
int main(){
	fibo();
	return 0;
}
void fibo(){
	int n1=0, n2=1, n3,i,num;
	printf("\n\nFibonacci Seris :\n\n");
	printf("Enter the Number :");
	scanf("%d" ,&num);
	printf("%d,%d," ,n1,n2);
	for(i=2; i<=num; i++){
		n3=n1+n2;
		n1=n2;
		n2=n3;
		printf("%d," ,n3);
	}
	fibo();
}