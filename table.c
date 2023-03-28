#include<stdio.h>
int main(){
	int n,m;
	printf("Enter the value of n:-");
	scanf("%d" ,&n);
	for(int i=1; i<=10; i++){
		printf("%d*%d=%d\n",n,i,n*i);
	}
	printf("Enter the value of m:-");
	scanf("%d" ,&m);
	for(int i=1; i<=10; i++){
		printf("%d*%d=%d\n",m,i,m*i);
	}
	return 0;
}