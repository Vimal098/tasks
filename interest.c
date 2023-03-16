#include<stdio.h>
int main(){
	float p,r,n,total;
	printf("Enter the value of p:-\n");
		scanf("%f",&p);
	printf("Enter the value of r:-\n");
		scanf("%f",&r);
	printf("Enter the value of n:-\n");
		scanf("%f",&n);

	total= p*r*n/100;
	printf("%f" ,total);
	return 0;
}