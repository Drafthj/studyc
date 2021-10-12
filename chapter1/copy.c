//
// Created by drafthj on 2021/10/12.
//
#include<stdio.h>
int main() {
    int c;
    printf("%d", EOF);
    while((c = getchar()) != EOF) {
        putchar(c);
    }
}
