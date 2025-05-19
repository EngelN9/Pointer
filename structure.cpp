#include <iostream>
#include <string>
#include <algorithm> // for sort
using namespace std;

// 定義學生結構
struct Student {
    string name;
    int score;
};

// 比較函式，用於排序（由高到低）
bool compareByScore(const Student* a, const Student* b) {
    return a->score > b->score;
}

int main() {
    const int SIZE = 10;
    Student students[SIZE];          // 結構陣列
    Student* ptrs[SIZE];             // 結構指標陣列

    // 輸入學生資料
    for (int i = 0; i < SIZE; ++i) {
        cout << "輸入第 " << i + 1 << " 位學生姓名: ";
        cin >> students[i].name;
        cout << "輸入第 " << i + 1 << " 位學生成績: ";
        cin >> students[i].score;
        ptrs[i] = &students[i]; // 儲存結構指標
    }

    // 使用指標陣列排序
    sort(ptrs, ptrs + SIZE, compareByScore);

    // 輸出排序後的結果
    cout << "\n成績排序由高到低:\n";
    for (int i = 0; i < SIZE; ++i) {
        cout << ptrs[i]->name << " - " << ptrs[i]->score << endl;
    }

    return 0;
}

