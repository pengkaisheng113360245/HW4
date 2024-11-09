#include <stdio.h>

#define SIZE 10

void bubbleSort(int array[], int size);

int main(void)
{
    int a[SIZE] = { 34, 23, 12, 45, 9, 1, 24, 56, 78, 2 };
    int i;

    printf("Data items in original order\n");
    for (i = 0; i < SIZE; i++)
    {
        printf("%4d", a[i]);
    }

    bubbleSort(a, SIZE);

    printf("\nData items in ascending order\n");
    for (i = 0; i < SIZE; i++)
    {
        printf("%4d", a[i]);
    }

    return 0;
}

void bubbleSort(int array[], int size)
{
    int pass, i, hold;
    int swapped;

    for (pass = 1; pass < size; pass++)
    {
        swapped = 0;  // 用於檢查是否有交換發生

        // 內層迴圈逐步減少比較次數
        for (i = 0; i < size - pass; i++)
        {
            if (array[i] > array[i + 1])
            {
                hold = array[i];
                array[i] = array[i + 1];
                array[i + 1] = hold;
                swapped = 1;  // 標記已發生交換
            }
        }

        // 如果在某一輪中沒有發生任何交換，則排序完成
        if (!swapped)
        {
            break;
        }
    }
}
