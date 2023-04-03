#include<stdio.h>
int main(){
	int a[6],temp=0,i,j;
	int length =sizeof(a)/sizeof(a[0]);
	printf("Enter the Elements of array :\n");
	for(i=0; i<6; i++){
		scanf("%d" ,&a[i]);
	}
	printf("Elements of original array :\n");
	for(i=0; i<6; i++){
	printf("%d" ,a[i]);
			}
		for(i=0; i<6; i++){
		for(j=i+1; j<6; j++){
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\n");
	printf("Elements of array sorted in ascending order\n");
	for(i=0; i<length; i++){
		printf("%d",a[i]);
	}
	
	return 0; 
}










