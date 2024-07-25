#include <stdio.h>

int main() {
	
	int yourAge;
	printf("ENTER YOUR AGE : ");
	scanf("%d",&yourAge);

	if(yourAge >= 18){
	printf("YES YOU ARE ELIGBLE FOR VOTE.");
	}
	else{
	printf("YOU ARE NOT ELIGBLE FOR VOTE.");
	}
return 0;
}
