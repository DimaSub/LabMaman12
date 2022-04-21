/*
 * Maman 11 - Question 1
 * A program that calculates the multiplication of 2 equal length scalars of up to 100 members each.
 * 27/3/2022
 * Dima Subotin
 * ID: 311626519
 */

#include <stdio.h>

/*Global variables declaration.*/
int user_length=0;
int scalar_u[100];
int scalar_v[100];
int i;

/*A function than calculates 2 given arrays multiplication result.*/
int scalar_product(int scalar_u[], int scalar_v[], int user_length){
    int sum=0;
    for (i = 0; i < user_length; ++i) {
        sum+=scalar_u[i]*scalar_v[i];
    }
    return sum;
}

/*A function that stores users input in an array that represents scalar.*/
void scalar_array(int user_length, int scalar[]){
    for (i = 0; i < user_length; ++i) {
        printf("Please enter member %d for the scalar:", i+1);
        scanf("%d", &scalar[i]);
    }
}

/*Programs main function.*/
int main() {
    while(user_length<1 || user_length>100){
        printf("Please enter a valid length for the scalars:");
        scanf("%d", &user_length);
    }

    printf("\nPlease enter the members of the first scalar-\n");
    scalar_array(user_length, scalar_u);
    printf("\nPlease enter the members of the second scalar-\n");
    scalar_array(user_length, scalar_v);
    /*Wasn't sure if the assignment asked me to print the result or return it so added this printf just in case.*/
    printf("\nThe result of scalar multiplication is:%d\n", scalar_product(scalar_u,scalar_v,user_length));
    return scalar_product(scalar_u,scalar_v,user_length);
}

