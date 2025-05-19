#include <iostream>
using namespace std;

// 全域靜態陣列：三位學生，每人五科成績
static int scores[3][5];

// 函式：輸入某位學生的分數
void inputScores(int studentIndex) {
    cout << "輸入 " << char('A' + studentIndex) << " 生五科的分數 ~" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << "Input grades (course " << i + 1 << "): ";
        cin >> scores[studentIndex][i];
    }
}

// 函式：分析某位學生的及格狀況與高分統計
void analyzeScores(int studentIndex) {
    int count90 = 0;

    cout << "輸出結果 ~" << endl;
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

// 主程式
int main() {
    for (int student = 0; student < 3; ++student) {
        inputScores(student);
        analyzeScores(student);
    }

    return 0;
}

