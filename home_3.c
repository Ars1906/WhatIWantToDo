#include <stdio.h>

void compare(short int x, short int y, short int z){

if(x >= y){
                if(x >= z)
                        printf("x, x = %hd, is the biggest number.\n",x);
                else
                        printf("z, z = %hd, is the biggest number.\n",z);
        }
        else{
                if(y >= z)
                        printf("y, y = %hd, is the biggest number.\n",y);
                else
                        printf("z, z = %hd, is the biggest number.\n",z);
        }
}

int main(){

short int x,y,z;

x = y = z = 0;

printf("Enter 1st number:\n");
scanf("%hd",&x);

printf("Enter 2nd number:\n");
scanf("%hd",&y);

printf("Enter 3rd  number:\n");
scanf("%hd",&z);


if(x == y || x == z || y == z)
	compare(x,y,z);
else	
	printf("There is no any coincidence of equality, so no comperision.\n");

return 0;
}
