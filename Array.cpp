#include <stdio.h>

int main() {
    int grades[5];
    int sum = 0;
    double average;

    // 1. 輸入五科成績
    for (int i = 0; i < 5; i++) {
        printf("Input grades (course %d): ", i + 1);
        scanf("%d", &grades[i]);
    }

    printf("\n");

    // 2. 顯示各科成績並累加
    for (int i = 0; i < 5; i++) {
        printf("Grades of course %d: %d\n", i + 1, grades[i]);
        sum += grades[i];
    }

    // 3. 計算平均
    average = (double)sum / 5.0;

    // 4. 顯示平均分數
    printf("\nAverage = %.2f\n", average);

    return 0;
}

