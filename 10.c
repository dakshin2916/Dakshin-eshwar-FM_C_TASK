#include <stdio.h>

void rotate90(int mat[n][n]) {
    int res[n][n] = {0}; 

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            res[j][n - i - 1] = mat[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            mat[i][j] = res[i][j];
        }
    }
}

int main() {
    int n;
    printf("Enter order of matrix:");
    scanf("%d",&n);
    int mat[n][n] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    rotate90(mat);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}