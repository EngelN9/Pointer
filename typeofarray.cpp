#include <iostream>
using namespace std;

// �����R�A�}�C�G�T��ǥ͡A�C�H���즨�Z
static int scores[3][5];

// �禡�G��J�Y��ǥͪ�����
void inputScores(int studentIndex) {
    cout << "��J " << char('A' + studentIndex) << " �ͤ��쪺���� ~" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << "Input grades (course " << i + 1 << "): ";
        cin >> scores[studentIndex][i];
    }
}

// �禡�G���R�Y��ǥͪ��ή檬�p�P�����έp
void analyzeScores(int studentIndex) {
    int count90 = 0;

    cout << "��X���G ~" << endl;
    for (int i = 0; i < 5; ++i) {
        if (scores[studentIndex][i] >= 60)
            cout << "Grades of course " << i + 1 << ": passed" << endl;
        else
            cout << "Grades of course " << i + 1 << ": failed" << endl;

        if (scores[studentIndex][i] >= 90)
            count90++;
    }

    cout << "(Greater >= 90) has " << count90 << " courses" << endl;
    cout << endl;
}

// �D�{��
int main() {
    for (int student = 0; student < 3; ++student) {
        inputScores(student);
        analyzeScores(student);
    }

    return 0;
}

