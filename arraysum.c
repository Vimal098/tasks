#include<stdio.h>
int main(){
	int a[]={1,3,4,6,7};
int sum =0;
 int length=sizeof(a)/sizeof(a[0]);
	for(int i=0; i<length; i++){
	                  
		        sum=sum+a[i];                           
	}
	printf("%d" ,sum);
	return 0;






}
