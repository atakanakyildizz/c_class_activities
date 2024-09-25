//
// Created by Atakan Akyıldız on 25.09.2024.
//
#include <stdio.h>

int isprime(void) {

    int prime, divisor ;

    printf("Enter a number: ");
    scanf("%d", &prime);

    if (prime <= 0) {
        printf("The number %d is not a valid number\n", prime);
        return -1;
    }
    if (prime == 1) {
        printf("1 is always prime \n");
        return 0;
    }

    divisor = 2;
    while ((prime % divisor != 0) && (divisor == prime/2)) {
        divisor++;
    }


    if (prime % divisor == 0) {
        printf("%d is not a prime number\n", prime);
    }
    else {
        printf("%d is a prime number\n", prime);
    }

    return 0;
}

int main(void) {
    isprime() ;
}