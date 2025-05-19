#include <iostream>
using namespace std;

// 遞迴函式：計算 N 的階乘
long long factorial(int n) {
    if (n <= 1)  // 終止條件：0! = 1! = 1
        return 1;
    else
        return n * factorial(n - 1);  // 遞迴公式
}

// 主程式
int main() {
    int N;

    cout << "請輸入一個正整數 N: ";
    cin >> N;

    if (N < 0) {
        cout << "錯誤：階乘只定義於非負整數。" << endl;
    } else {
        long long result = factorial(N);
        cout << N << "! = " << result << endl;
    }

    return 0;
}

