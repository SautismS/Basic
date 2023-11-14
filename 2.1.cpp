/*
дһ������������3*3�Ķ�ά���飬�����3*3�ľŹ���˳ʱ����ת90�Ȳ��ԾŹ�����ʽ��ӡ������
*/

#include <stdio.h>

void inputMatrix(int matrix[3][3]) {
    printf("������Ź������Ԫ�أ�\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf_s("%d", &matrix[i][j]);
        }
    }
}

void rotateMatrix(int matrix[3][3]) {
    //ת�ã�
    for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 3; j++) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
    //������
    for (int i = 0; i < 3; i++) {
        for (int j = 0, k = 2; j < k; j++, k--) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[i][k];
            matrix[i][k] = temp;
        }
    }
}

void printMatrix(int matrix[3][3]) {
    printf("��ת��ľŹ������\n");
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