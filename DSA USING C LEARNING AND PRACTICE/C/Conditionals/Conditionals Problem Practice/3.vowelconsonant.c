#include <stdio.h>

int main(){
	char yourChar;
	
	printf("ENTER YOUR CHAR FOR CHECKING : ");
	scanf("%c", &yourChar);
	
	if(yourChar=='a' || yourChar=='e' || yourChar=='i' || yourChar=='o' || yourChar=='u' || yourChar=='A' || yourChar=='E' || yourChar=='I' || yourChar=='O' || yourChar=='U'){
	
	printf("IT'S VOWEL");
	
	}
	else{
	printf("IT'S CONSONANT");
	
	}
	

return 0;
}
