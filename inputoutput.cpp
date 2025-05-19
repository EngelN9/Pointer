#include <iostream>
#include <cstdio>  // for scanf and printf

int main() {
    int yy, mm, dd;

    // 提示輸入日期
    printf("請輸入日期（格式為 yyyy-mm-dd）：");
    scanf("%d-%d-%d", &yy, &mm, &dd);

    // 檢查民國年是否合理（可省略）
    if (yy >= 1912) {
        int roc_year = yy - 1911;
        printf("民國日期為：民國 %d 年 %d 月 %d 日\n", roc_year, mm, dd);
    } else {
        printf("您輸入的年份早於民國元年（1912年）。\n");
    }

    return 0;
}



