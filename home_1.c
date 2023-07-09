#include <stdio.h>

int main(){

char sym = 0;
short int i = 0;

printf("Enter the letter you wish:\n");
do {

scanf("%c",&sym);
short int t = sym;

if((t >= 65 && t <= 90) || (t >= 97 && t <= 122))
	i = t;
else{
	printf("Error! You may entered wrong symbol or letter. Try again\n");
}
}
while(i == 0);
printf("\n");

if(i >= 97 && i <= 122)
	i -= 32;

if(i == 65 || i == 69 || i == 73 || i == 79 || i == 85)
	printf("Your entered letter (%c) is vowel",sym);
else
	printf("Your entered letter (%c) is consonant",sym);

printf("\n");

return 0;

}
