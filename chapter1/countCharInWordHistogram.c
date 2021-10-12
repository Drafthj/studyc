//
// 打印输入中各个字符出现频度的直方图
// Created by drafthj on 2021/10/12.
//
#include <stdio.h>
int main() {
    int ascll[128];
    for (int i = 0; i < 128; ++i) {
        ascll[i] = 0;
    }
    int c;
    while((c = getchar()) != EOF) {
        ascll[c]++;
    }
    for (int i = 0; i < 128; ++i) {
        if(ascll[i] != 0) {
            printf("%c", i);
            for (int j = 0; j < ascll[i]; ++j) {
                printf("|");
            }
            printf("\n");
        }
    }
}

