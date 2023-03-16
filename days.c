#include<stdio.h>
int main(){
	int days;
	printf("Enter the days Number:-");
	scanf("%d" ,&days);
	switch(days){
		case 1:
			printf("Monday");
			break;

				case 2:
			printf("Tueday");
			break;
				case 3:
			printf("Wednesday");
			break;
				case 4:
			printf("Thursday");
			break;
				case 5:
			printf("Friday");
			break;
				case 6:
			printf("Saturday");
			break;
			case 7:
				printf("Sunday");
				break;
				default:
					printf("Enter a valid Number");
					break;
			
			
	}
	return 0;
}