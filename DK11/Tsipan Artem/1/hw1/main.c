#include <stdio.h>
#include <stdlib.h>
#include "dktool.h"

int main()
{
    sorry();
    int size;
    int b;
    printf("������ ������ ��� ������� ���� ����������� �������: \n");
    scanf("%d", &size);
    int a[size][size];
    printf("������ ����� �������� ������� ����� ����� \n");
    for (int i = 0; i < size; ++i) {           // ���������� ������� �������
        for (int j = 0; j < size; ++j) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("������ �������: \n");
    scanf("%d", &b);                            // ���������� ������� �������
    printf("Գ������ �������: \n");
    for (int i = 0; i < size; ++i) {           // �������� �� ����� �������� �������
        for (int j = 0; j < size; ++j) {
            printf("%d ", a[i][j] * b   );
        }
        printf("\n");
    }
    return 0;
}
