/*
写一个函数，输入3*3的二维数组，将这个3*3的九宫格顺时针旋转90度并以九宫格形式打印出来。
*/

#include <stdio.h>

void inputMatrix(int matrix[3][3]) {
    printf("请输入九宫格矩阵元素：\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf_s("%d", &matrix[i][j]);
        }
    }
}

void rotateMatrix(int matrix[3][3]) {
    //转置：
    for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 3; j++) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
    //行逆序：
    for (int i = 0; i < 3; i++) {
        for (int j = 0, k = 2; j < k; j++, k--) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[i][k];
            matrix[i][k] = temp;
        }
    }
}

void printMatrix(int matrix[3][3]) {
    printf("旋转后的九宫格矩阵：\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[3][3];

    inputMatrix(matrix);

    rotateMatrix(matrix);

    printMatrix(matrix);

    return 0;
}