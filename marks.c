#include<stdio.h>
int main(){
	int maths,phy,chem;
	printf("Enter the marks of maths:");
	scanf("%d" ,&maths);

	printf("Enter the marks of Physics:");
	scanf("%d" ,&phy);
			printf("Enter the marks of Chemistry:");
	scanf("%d" ,&chem);
	if(maths>=65){
		printf("You are eligible.");
	}
	else if(phy>=55){
		printf("you are eligible.");
	}
	else if(chem>=50){
		printf("You are eligible");
		
	}
	else {
		printf("Your marks is not Good.\n");
	}
	
	if(maths+phy+chem>=190){
		printf("\nYou are eligible for Admission.");
	}
	else if(maths+phy>=140){
		printf("\nYou are eligible for Admission.");
	}
	else {
		printf("\nYou are not Eligible for Admission.");
	}
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}