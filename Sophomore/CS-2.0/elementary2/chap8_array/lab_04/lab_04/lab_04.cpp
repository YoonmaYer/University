#include <stdio.h>

int main() {
    int a[] = { 32, 56, 7, 8, 24 };
    int b[] = { 3, 21, 35, 57, 24, 82, 8 };

    int c[12];
    // �迭 ũ�� ���
    int a_size = sizeof(a) / sizeof(a[0]); // unsigned int = 4byte, 20/4 = 5
    int b_size = sizeof(b) / sizeof(b[0]); // 28/4 = 7

    for (int i = 0; i < (a_size + b_size); i++) {
        if (i >= a_size) {
            c[i] = b[i - a_size]; // 5~11�ε���
            printf("%d ", c[i]);
        }
        else {
            c[i] = a[i]; // 0~4 �ε���
            printf("%d ", c[i]); // 0~11 �ε����� ���������� ���
        }
    }
    return 0;
}