#include <stdio.h>
#include "lib.h"

int main() {
    int a;
    int b;
    int c;
    int d;
    printf("Welcome to the calculator!\n");
    printf("Please choose an operator: \n1) Add \n2) Subtract\n3) Multiply\n4) Divide\n>>> ");
    scanf("%d", &a);
    if(a == 1) {
        printf("Enter a number:\n>>> ");
        scanf("%d", &b);
        printf("Enter another number:\n>>> ");
        scanf("%d", &c);
        printf("The answer is: %d", add(b, c));
    } else if(a == 2) {
        printf("Enter a number:\n>>> ");
        scanf("%d", &b);
        printf("Enter another number:\n>>> ");
        scanf("%d", &c);
        printf("The answer is: %d", subtract(b, c));
    } else if(a == 3) {
        printf("Enter a number:\n>>> ");
        scanf("%d", &b);
        printf("Enter another number:\n>>> ");
        scanf("%d", &c);
        printf("The answer is: %d", multiply(b, c));
    } else if(a == 4) {
        printf("Enter a number:\n>>> ");
        scanf("%d", &b);
        printf("Enter another number:\n>>> ");
        scanf("%d", &c);
        printf("The answer is: %d", divide(b, c));
    } else {
        printf("%d is an invalid number.", a);
    }
}