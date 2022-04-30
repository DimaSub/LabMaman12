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
int *p;
int *q;
int i;
FILE *file;
char f_name[100];


/*A function that stores users input in a dynamically allocated memory.*/
void input_storage(int input){
    q = realloc(p, (counter+1) * sizeof(int));
    if (!q) {
        printf("Memory allocation failed");
        exit(0);
    }
    p = q;
    q[counter] = input;
}

/*A function that prints users input in as an organized list.*/
void input_print(){
    printf("\n\nAn organized list of your input:\n\n");
    for (i=0; i<counter ; i++) {
            if (q[i]==10) printf("Enter");
            if (q[i]==32) printf("Space");
            if (q[i]==9) printf("Tab");
            else printf("%c    ", q[i]);
            if ((i+1)%8==0) printf("\n");
    }
}

int main() {
    p = (int *)malloc(sizeof(int));
    if (!p) {
        printf("Memory allocation failed");
        exit(0);
    }

    while(start!=1 && start!=2){
        printf("Please choose your input preferences:\n 1 - File input\n 2 - Keyboard input\n\n");
        scanf("%d", &start);
    }

    if (start==1) {
        printf("\nPlease enter the name of the file to open:\n");
        scanf("%s", f_name);
        file = fopen(f_name, "r");
        if (file != NULL){
        while (1) {
            char_input = fgetc(file);
            if (feof(file)) {
                break;
            }
            printf("%c", char_input);
            input_storage(char_input);
            if (isalnum(char_input)) counter_an++;
            counter++;
        }
    }
        else {
            printf("\nFile doesnt exists\n");
            exit(0);
        }
    }

    if (start==2) {
        printf("\nPlease enter any character you want:\n");
        printf("(Press Ctrl+D to stop inputting characters and get an output)\n");
        while ((char_input = fgetc(stdin)) != EOF) {
            input_storage(char_input);
            if (isalnum(char_input)) counter_an++;
            counter++;
        }
    }

    input_print();

    printf("\nThe number of alpha-numeric characters entered: %d\n", counter_an);
    printf("The number of total characters entered: %d\n", counter);

    free(p);

    return 0;
}
