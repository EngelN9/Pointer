#include <iostream>
#include <cstdio>  // for scanf and printf

int main() {
    int yy, mm, dd;

    // ���ܿ�J���
    printf("�п�J����]�榡�� yyyy-mm-dd�^�G");
    scanf("%d-%d-%d", &yy, &mm, &dd);

    // �ˬd����~�O�_�X�z�]�i�ٲ��^
    if (yy >= 1912) {
        int roc_year = yy - 1911;
        printf("���������G���� %d �~ %d �� %d ��\n", roc_year, mm, dd);
    } else {
        printf("�z��J���~��������ꤸ�~�]1912�~�^�C\n");
    }

    return 0;
}



