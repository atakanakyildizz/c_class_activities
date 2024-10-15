//
// Created by Atakan Akyildiz on 15.10.2024.
//
#include <stdio.h>
#include <stdlib.h>

#define N_ROWS 10
#define N_COLS 100

//My solution
/*
int main(void)
{
    int matrix[N_ROWS][N_COLS];
    for(int i=0;i<N_ROWS;i++) {
        for(int j=0;j<N_COLS;j++) {
            matrix[i][j] = j-1;
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}*/


//Class solution by professor
int main() {
    int **matrix = NULL;
    size_t index, col_index;

    //first step rows
    matrix = (int**) malloc(N_ROWS * sizeof(int*));

    if (matrix == NULL) {
        fprintf(stderr, "Error allocating memory for matrix\n");
        return -1;
    }

    // second step: cols
    for (index = 0; index < N_ROWS; index++) {
        matrix[index] = (int*) malloc(N_COLS * sizeof(int));
        if (matrix[index] == NULL) {
            fprintf(stderr, "Cannot allocate %lu-th row\n", index);
            for (col_index = 0; col_index < index; col_index++) {
                free(matrix[col_index]);
            }
            free(matrix);
            return -2;
            }
        }

    for (index = 0; index < N_ROWS; index++) {
        for (col_index = 0; col_index < N_COLS; col_index++) {
            matrix[index][col_index] = col_index - 1;
        }
    }

    for (index = 0; index < N_ROWS; index++) {
        for (col_index = 0; col_index < N_COLS; col_index++) {
            fprintf(stdout, "%d ", matrix[index][col_index]);
        }
        fprintf(stdout, "\n");
    }

    // third step: free
    for (index = 0; index < N_ROWS; index++) {
        free(matrix[index]);
    }
    free(matrix);

    return 0;
}