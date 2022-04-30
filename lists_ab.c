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

/*Global variables declaration.*/
int start = 0;
int counter_an = 0;
int counter = 0;
int char_input;


/*A function that stores users input in a dynamically allocated memory.*/
void input_storage(int input){

}

int main() {
    int *p = (int *)malloc(sizeof(int));
    if (!p) {
        printf("Memory allocation failed");
        exit(0);
    }

    int *q = p;

    while(start!=1 && start!=2){
        printf("Please choose your input preferences:\n 1 - File input\n 2 - Keyboard input\n\n");
        scanf("%d", &start);

    }

    if (start==2) {
        printf("\nPlease enter any character you want:\n");
        printf("(Press Ctrl+D to stop inputting characters and get an output)\n");
        while ((char_input = fgetc(stdin)) != EOF) {
            printf("%d\n", char_input);
//            input_storage(putchar(c));
            if (isalnum(char_input)) counter_an++;
            counter++;
        }
    printf("The number of alpha-numeric characters entered: %d\n", counter_an);
    printf("The number of total characters entered: %d\n", counter);
    }

    return 0;
}
