#include <iostream>
using namespace std;

// ���j�禡�G�p�� N ������
long long factorial(int n) {
    if (n <= 1)  // �פ����G0! = 1! = 1
        return 1;
    else
        return n * factorial(n - 1);  // ���j����
}

// �D�{��
int main() {
    int N;

    cout << "�п�J�@�ӥ���� N: ";
    cin >> N;

    if (N < 0) {
        cout << "���~�G�����u�w�q��D�t��ơC" << endl;
    } else {
        long long result = factorial(N);
        cout << N << "! = " << result << endl;
    }

    return 0;
}

