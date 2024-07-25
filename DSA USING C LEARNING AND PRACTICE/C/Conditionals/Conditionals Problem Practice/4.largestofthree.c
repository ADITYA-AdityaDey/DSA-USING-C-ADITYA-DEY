#include <stdio.h>
int main () {
	
	int number1, number2, number3;
	
	printf("ENTER THREE NUMBER : ");
	scanf("%d%d%d", &number1, &number2, &number3);
	
	if(number1>number2 && number1>number3){
	printf("%d IS GREATER.", number1);
	}
	else if(number2>=number1 && number2>=number3){
	printf("%d IS GREATER.", number2);
	}
	else{
	printf("%d IS GREATER.", number3);
	}


return 0;
}
