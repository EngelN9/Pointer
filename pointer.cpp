#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int i;

    // �ʺA���t�j�p�� 10 ����ư}�C
    arr = (int *)malloc(10 * sizeof(int));
    if (arr == NULL) {
        printf("�O������t���ѡI\n");
        return 1;
    }

    // ���ܥΤ��J 10 �Ӿ��
    printf("�п�J 10 �Ӿ�ơG\n");
    for (i = 0; i < 10; i++) {
        printf("�� %d �Ӿ��: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // �ϦV��X�}�C���e
    printf("�ۤ϶��Ǫ���X�G\n");
    for (i = 9; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // ����ʺA�O����
    free(arr);

    return 0;
}

