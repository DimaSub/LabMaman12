/*
 * Maman 11 - Question 2
 * A program that receives 2 positive numbers and checks how many common lit bits they share between them.
 * 27/3/2022
 * Dima Subotin
 * ID: 311626519
 */

#include <stdio.h>
/*A function to calculate number of lit bits in a number*/
int positiveBits(int chk){
    int cnt=0;
    for(;chk; cnt++,chk&=chk-1);
    return cnt;
}

/*Programs main function.*/
int main() {
    /*Variables declaration.*/
    unsigned long x,y;

    printf("Please enter the first number:");
    scanf("%lu", &x);
    printf("Please enter the second number:");
    scanf("%lu", &y);
    printf("\nThe numbers you have entered are: %lu and %lu\n",x,y);
    printf("\nThe number of common lit bits between the two numbers is:%d\n",positiveBits(x&y));

    return 0;
}

