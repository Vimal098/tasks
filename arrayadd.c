#include<stdio.h>
#include<conio.h>
int main(){
	int a[2][2],b[2][2],c[2][2],i,j,n;
	printf("Enter the Elemets of array A :\n");
	for(i=0; i<2; i++){
	for(j=0; j<2; j++){
	 scanf("%d" ,&a[i][j]);
	}
	}
	printf("Enter the Elements of array B :\n");
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			scanf("%d" ,&b[i][j]);
		}
	}
	printf("\n\nFirst\n\n");
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			printf("%d\t" ,a[i][j]);
		}
		printf("\n");
	}
	
		printf("\n\nSecond\n\n");
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			printf("%d\t" ,b[i][j]);
		}
		printf("\n");
	}
		printf("\n\nThe sum of Array will be :\n\n");
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			c[i][j]=a[i][j]+b[i][j];
		printf("%d\t" ,c[i][j]);
		}
		printf("\n");
	}
	getch();
	return 0;
}