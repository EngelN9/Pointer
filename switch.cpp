#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "請輸入兩個整數：";
    cin >> a >> b;

    // 比較結果：1 表示 a > b，-1 表示 a < b，0 表示相等
    int cmp = (a > b) ? 1 : (a < b) ? -1 : 0;

    switch (cmp) {
        case 1:
            cout << "較大的數為：" << a << endl;
            break;
        case -1:
            cout << "較大的數為：" << b << endl;
            break;
        case 0:
            cout << "兩數相等，值為：" << a << endl;
            break;
        default:
            // 不會到這裡
            break;
    }

    return 0;
}


