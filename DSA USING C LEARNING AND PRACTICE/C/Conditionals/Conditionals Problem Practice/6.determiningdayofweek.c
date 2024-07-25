#include <stdio.h>

int main() {

	int day;
	printf("ENTER A NUMBER (1-7) : ");
	scanf("%d", &day);
	
	if(day >= 1 && day <= 7){
		if(day == 1){
		printf("SUNDAY\n");
		}
		else if(day == 2) {
		printf("MONDAY\n");
		}
		else if (day == 3) {
		printf("TUESDAY\n");
		}
		else if(day == 4){
		printf("WEDNESDAY\n");
		}
		else if(day == 5) {
		printf("THURSDAY\n");
		}
		else if (day == 6) {
		printf("FRIDAY\n");
		}
		else{
		printf("SATURDAY\n");
		}
	}
	else{
	printf("INVALID INPUT. PLEASE ENTER A NUMBER BETWEEN 1-7.");
	
	}
	

return 0;

}
