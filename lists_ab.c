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
#include <ctype.h>

int start = -1;

int main() {

    int *p = (int *)malloc(sizeof(int));
    int *q = p;
    int counter = 0;
    int a[5];
    char c = 0;


    while(start!=1 && start!=2){
        printf("Please choose your input preferences:\n 1 - File input\n 2 - Keyboard input\n\n");
        scanf("%d", &start);

    }

    if (start==2) {
        printf("\nPlease enter any character you want:\n");
        printf("(Press Ctrl+D to stop receiving characters and get an output)\n");
        while (c != EOF) {
            c = fgetc(stdin);
            p[counter] = c;
            counter++;
        }

        printf("End:\n");
    }

    return 0;
}
