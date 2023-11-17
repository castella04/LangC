#include <stdio.h>

int main(void){
    //No.1
    printf("Welcome to C Programming!\n");

    //No.2
    int x,y,z;
    x = 10;
    y = x * 2;
    z = x + y;
    printf("x,y,z = %d,%d,%d\n",x,y,z);

    //No.3
    int price = 500;
    printf("%.1f\n", price * 1.1);

    return 0;

}