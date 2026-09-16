//Q76: Check if a matrix is symmetric.
#include <stdio.h>
int main() {
    int rows, cols, i, j;
    int isSymmetric = 1;
    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);
    if (rows != cols) {
        printf("The matrix is not symmetric.\n");
        return 0;
    }
    int matrix[100][100]; 
    printf("Enter matrix elements:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
        if (!isSymmetric) {
            break;
        }
    }
    if (isSymmetric) {
        printf("The matrix is symmetric.\n");
    } else {
        printf("The matrix is not symmetric.\n");
    }
    return 0;
}