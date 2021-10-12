//
// Created by drafthj on 2021/10/12.
//
#include <stdio.h>

int main() {
    int c;
    //空格长度
    int sc;
    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            ++sc;
            if (sc == 1) {
                putchar(c);
            }
        } else {
            sc = 0;
            putchar(c);
        }
    }
}

