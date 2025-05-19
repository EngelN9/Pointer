#include <iostream>
#include <string>
#include <algorithm> // for sort
using namespace std;

// �w�q�ǥ͵��c
struct Student {
    string name;
    int score;
};

// ����禡�A�Ω�Ƨǡ]�Ѱ���C�^
bool compareByScore(const Student* a, const Student* b) {
    return a->score > b->score;
}

int main() {
    const int SIZE = 10;
    Student students[SIZE];          // ���c�}�C
    Student* ptrs[SIZE];             // ���c���а}�C

    // ��J�ǥ͸��
    for (int i = 0; i < SIZE; ++i) {
        cout << "��J�� " << i + 1 << " ��ǥͩm�W: ";
        cin >> students[i].name;
        cout << "��J�� " << i + 1 << " ��ǥͦ��Z: ";
        cin >> students[i].score;
        ptrs[i] = &students[i]; // �x�s���c����
    }

    // �ϥΫ��а}�C�Ƨ�
    sort(ptrs, ptrs + SIZE, compareByScore);

    // ��X�Ƨǫ᪺���G
    cout << "\n���Z�ƧǥѰ���C:\n";
    for (int i = 0; i < SIZE; ++i) {
        cout << ptrs[i]->name << " - " << ptrs[i]->score << endl;
    }

    return 0;
}

