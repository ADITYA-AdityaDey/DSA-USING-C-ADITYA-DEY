#include <stdio.h>

int main() {
	int yourNumber;
	
	printf("PLEASE ENTER YOUR NUMBER : ");
	scanf("%d", &yourNumber);
	
	
	for (int i=1; i<=10; i++) {
		printf("%d * %d = %d\n", yourNumber, i, yourNumber*i);
	}



return 0;
}
