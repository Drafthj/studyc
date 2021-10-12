//
// Created by drafthj on 2021/10/12.
//
#include <stdio.h>
int main() {
    long count = 0;
    while(getchar() != EOF) {
        ++count;
    }
    printf("%ld", count);
}
