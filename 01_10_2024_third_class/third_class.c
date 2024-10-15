#include <math.h>
#include <stdio.h>
//
// Created by Atakan Akyildiz on 01.10.2024.
//

void isArmstrong(int num, int digitNumber) {
    int sum = 0, tempNum = num, lastDigit;
    int arr[digitNumber];

    for (int i = 1; i <= digitNumber; i++) {
        lastDigit = tempNum%10;
        tempNum = tempNum / 10;
        sum += pow(lastDigit, digitNumber);
    }
    tempNum = num;

    if (sum == num) {
        sum = 0;
        printf("%d is an Armstrong number because: \n%d => ", num,num);

        for (int i = 1, j = 0; i <= digitNumber; i++) {
            lastDigit = tempNum % 10;
            tempNum = tempNum / 10;
            sum += pow(lastDigit, digitNumber);
            printf("%d^%d ", lastDigit, digitNumber );
            arr[i] = pow(lastDigit, digitNumber);;
            j += 1;
            if (j < digitNumber) {
                printf("+ ");
            }
        }
            printf("= %d\n", sum);
            printf("=> ");
            for (int i = 1, j =1; i <= digitNumber; i++) {
                printf("%d ", arr[i]);
                if (j < digitNumber) {
                    printf("+ ");
                    j += 1;
                }
            }
            printf("= %d\n", sum);

    }

    else {
        sum = 0;
        printf("%d is not an Armstrong number because:\n%d => ", num,num);
        for (int i = 1, j = 0; i <= digitNumber; i++) {
            lastDigit = tempNum % 10;
            tempNum = tempNum / 10;
            sum += pow(lastDigit, digitNumber);
            printf("%d^%d ", lastDigit, digitNumber );
            arr[i] = pow(lastDigit, digitNumber);
            if (j < digitNumber) {
                printf("+ ");
                j += 1;
            }
        }

        printf("= %d\n", sum);
        printf("=> ");

        for (int i = 1, j = 1; i <= digitNumber; i++) {
            printf("%d ", arr[i]);
            if (j < digitNumber) {
                printf("+ ");
                j += 1;
            }
        }
        printf("= %d\n", sum);
    }
}


int digit(int num) {
        int digit;
        for (digit = 1; 0 < num; digit++) {
            num = (num-(num % 10)) / 10;
        }
    return digit-1;
    }


int main(void) {
    int number;
    printf("Enter a number:");
    scanf("%d", &number);
    isArmstrong(number, digit(number));
    return 0;
}

//ece göksu ekin efe ___

