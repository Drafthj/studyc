//
// Created by drafthj on 2021/10/12.
//
#include <stdio.h>

int main() {
    long nc = 0;
    int c;
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            ++nc;
        }
    }
    printf("%ld", nc);
}
