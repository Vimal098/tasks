#include<stdio.h>
void array();
int main(){

array();
	
	return 0;
}
void array(){
		int a[8];
	int i,max=0;
	printf("Enter the Elements :");
for(i=0; i<8; i++){
	scanf("%d" ,&a[i]);
}
	for(i=0; i<8; i++){
		if(a[i]>max){
			
			max=a[i];
		}
	}
	printf("Maximum is %d\n",max);
}