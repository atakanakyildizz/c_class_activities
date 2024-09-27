//
// Created by Atakan Akyıldız on 27.09.2024.
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

void smallest(int arr[], int n) {
    int temp = arr[0];
    for(int i = 0; i < n; i++) {
        if (temp > arr[i]) {
            temp = arr[i];
        }
    }
    printf("\n\nThe smallest element is %d\n", temp);
}


void biggest(int arr[], int n) {
    int temp = arr[0];
    for(int i = 0; i < n; i++) {
        if (temp < arr[i]) {
            temp = arr[i];
        }
    }
    printf("The biggest element is %d\n", temp);
}


int main() {
    srand(time(NULL));
    int array[SIZE];
    for (int i = 0; i < SIZE; i++){
        array[i] = rand() % 50 + 1;
}
    printf("Array before sorting:\n");
    for (int i = 0; i < SIZE; i++){
        printf(" %d", array[i]);;
    }
    smallest(array, SIZE);
    biggest(array, SIZE);

    return 0;
}
