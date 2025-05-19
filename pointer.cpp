#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int i;

    // 動態分配大小為 10 的整數陣列
    arr = (int *)malloc(10 * sizeof(int));
    if (arr == NULL) {
        printf("記憶體分配失敗！\n");
        return 1;
    }

    // 提示用戶輸入 10 個整數
    printf("請輸入 10 個整數：\n");
    for (i = 0; i < 10; i++) {
        printf("第 %d 個整數: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // 反向輸出陣列內容
    printf("相反順序的輸出：\n");
    for (i = 9; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // 釋放動態記憶體
    free(arr);

    return 0;
}

