#include<stdio.h>
#include<conio.h>
int main(){
	int a[3][3],b[3][3],c[3][3],i,j;

printf("Enter the elements of array A:-\n");
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("Enter the Elements:");
			scanf("%d" ,&a[i][j]);	
		}
	}
printf("Enter the elements of array B:-\n");		
		for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("Enter the Elements:");
			scanf("%d" ,&b[i][j]);	
		}
	}
	printf("\nFirst\n");
		for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("%d\t" ,a[i][j]);	
		}
		printf("\n");
	}
printf("\nSecond\n");
		for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("%d\t" ,b[i][j]);	
		}
			printf("\n");
	}
	printf("The addition of a and b will:-\n");
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			c[i][j]=a[i][j]+b[i][j];
			printf("%d\t" ,c[i][j]);
		}
		printf("\n");
	}
	getch();
	return 0;
	
}