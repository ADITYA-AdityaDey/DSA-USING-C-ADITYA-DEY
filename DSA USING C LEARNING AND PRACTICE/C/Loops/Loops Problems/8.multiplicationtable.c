#include <stdio.h>

int main() {
	int yourNumber,i=1;
	
	printf("ENTER YOUR NUMBER : ");
	scanf("%d", &yourNumber);
	
	printf("MULTIPLICATION TABLE FOR %d :\n", yourNumber);
	
	while (i<=10) {
	
		printf("%d * %d : %d\n", yourNumber, i, yourNumber*i);
	
		i++;
	}

	

return 0;
}
