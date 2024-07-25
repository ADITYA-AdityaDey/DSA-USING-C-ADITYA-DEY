#include <stdio.h>

int main() {
	int yourNumber, sum=0, i;
	
	printf("PLEASE ENTER YOUR NUMBER : ");
	scanf("%d", &yourNumber);
	
	for (i=1; i<=yourNumber; i++) {
	
		sum=sum+i;
	
	}
	
	printf("SUM OF NUMBERS : %d", sum);


return 0;
}
