#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "請輸入兩個整數：";
    cin >> a >> b;

    if (a > b)
        cout << "較大的數為：" << a << endl;
    else
        cout << "較大的數為：" << b << endl;

    return 0;
}

