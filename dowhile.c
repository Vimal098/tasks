#include<stdio.h>
int main(){
	int i;
	for(i=10; i<=20; i++){
		if(i==12)
			continue;
			printf("%d\n" ,i);
	}
	
	return 0;
}