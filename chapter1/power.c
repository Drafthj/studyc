//
// Created by drafthj on 2021/10/13.
//
#include <stdio.h>

int power(int m, int n);

int main() {
    int i;
    for (i = 0; i < 10; i++) {
        printf("%d %d %d\n", i, power(2, i), power(-3, i));
    }
}
//n为值传递，不会修改n的值
int power(int base, int n) {
    int p;
    for (p = 1; n > 0; --n) {
        p = p * base;
    }
    return p;
}
