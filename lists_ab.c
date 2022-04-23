/*
 * Maman 12
 * A program that receives users input of unknown number of chars.
 * The program then prints user-friendly list of the input.
 * The program also calculates the number of alphanumeric expressions in the input,
 * and the number of total chars, and prints them as well.
 * 24/4/2022
 * Dima Subotin
 * ID: 311626519
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

    while(user_length<1 || user_length>100){
        printf("Please enter a valid length for the scalars:");
        scanf("%d", &user_length);
    }

    int a[5] = {10,20,30,40,50};
    double *q;
    q = (double *)(a+3);
    printf("%d", *((int *)q));
    return 0;
}
