#include <stdio.h>

int main() {
    int grades[5];
    int sum = 0;
    double average;

    // 1. ��J���즨�Z
    for (int i = 0; i < 5; i++) {
        printf("Input grades (course %d): ", i + 1);
        scanf("%d", &grades[i]);
    }

    printf("\n");

    // 2. ��ܦU�즨�Z�ò֥[
    for (int i = 0; i < 5; i++) {
        printf("Grades of course %d: %d\n", i + 1, grades[i]);
        sum += grades[i];
    }

    // 3. �p�⥭��
    average = (double)sum / 5.0;

    // 4. ��ܥ�������
    printf("\nAverage = %.2f\n", average);

    return 0;
}

