#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "�п�J��Ӿ�ơG";
    cin >> a >> b;

    // ������G�G1 ��� a > b�A-1 ��� a < b�A0 ��ܬ۵�
    int cmp = (a > b) ? 1 : (a < b) ? -1 : 0;

    switch (cmp) {
        case 1:
            cout << "���j���Ƭ��G" << a << endl;
            break;
        case -1:
            cout << "���j���Ƭ��G" << b << endl;
            break;
        case 0:
            cout << "��Ƭ۵��A�Ȭ��G" << a << endl;
            break;
        default:
            // ���|��o��
            break;
    }

    return 0;
}


