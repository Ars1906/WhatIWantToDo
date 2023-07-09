#include <stdio.h>

int main(){

short int x = 0;

short int y = 0;


printf("Enter first number: ");
scanf("%hd",&x);

printf("\n");

printf("Enter second number: ");
scanf("%hd",&y);

if(x > y)
	printf("First number, x = %hd, is bigger.\n",x);
else
	printf("Second number, y = %hd, is bigger.\n",y);

return 0;

}
