#include <stdio.h>

void optimizedBubbleSort(int arr[], int n) {
    int i, j;
    int swapped;

    for (i = 0; i < n - 1; i++) {
        swapped = 0; // ��l�� swap �ˬd�ܼ�

        // �C�����N�A�̤j�����|����̫�A�ҥH�C�����N������ƥi�H���
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // �洫 arr[j] �M arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                swapped = 1; // �Y���洫�A��s swapped �� 1
            }
        }

        // �p�G�b�Y�����N���S���o�ͥ洫�A�h��ܰ}�C�w�Ƨ�
        if (swapped == 0)
            break;
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("�Ƨǫe���}�C: \n");
    printArray(arr, n);

    optimizedBubbleSort(arr, n);

    printf("�Ƨǫ᪺�}�C: \n");
    printArray(arr, n);

    return 0;
}
