#include <stdio.h>

int main() {

	int yourNumber, factorial=1, i=1;
	
	printf("ENTER YOUR NUMBER : ");
	scanf("%d", &yourNumber);
	
	
	
	if (yourNumber<1) {
		printf("PLEASE ENTER A NON-NEGATIVE NUMBER.\n");
	}
	else {
	while(i<=yourNumber) {
	
	factorial=factorial*i;
	
	i++;
	
	}
	
	printf("FACTORIAL OF %d: %d\n", yourNumber, factorial);
	}

return 0;
}
