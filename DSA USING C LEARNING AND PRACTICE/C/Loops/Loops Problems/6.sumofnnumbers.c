#include <stdio.h>

int main() {

	int yourNumber, sum=0, i;
	
	printf("ENTER YOUR NUMBER : ");
	scanf("%d", &yourNumber);
	
	i=0;
	while(i<=yourNumber) {
		sum=sum+i;
		
	i++;
	}
	
	printf("SUM OF FIRST %d NATURAL NUMBERS : %d\n", yourNumber, sum);


return 0;
}
