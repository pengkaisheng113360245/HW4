#include <stdio.h>

void optimizedBubbleSort(int arr[], int n) {
    int i, j;
    int swapped;

    for (i = 0; i < n - 1; i++) {
        swapped = 0; // 初始化 swap 檢查變數

        // 每次迭代，最大元素會移到最後，所以每次迭代比較次數可以減少
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // 交換 arr[j] 和 arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                swapped = 1; // 若有交換，更新 swapped 為 1
            }
        }

        // 如果在某次迭代中沒有發生交換，則表示陣列已排序
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

    printf("排序前的陣列: \n");
    printArray(arr, n);

    optimizedBubbleSort(arr, n);

    printf("排序後的陣列: \n");
    printArray(arr, n);

    return 0;
}
