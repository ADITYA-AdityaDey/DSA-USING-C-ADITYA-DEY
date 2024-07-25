#include <stdio.h>

int main() {
	int yourNumber, factorial=1, i;
	
	printf("PLEASE ENTER YOUR NUMBER : "); 
	scanf("%d", &yourNumber);

	for (i=yourNumber; i>=1; i--) {
	
	factorial = factorial*i;
	
	}

	printf("FACTORIAL : %d", factorial);

return 0;
}
