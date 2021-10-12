//
// Created by drafthj on 2021/10/12.
//
#include <stdio.h>
#define IN 1
#define OUT 0
int main() {
    int c,state;
    state = IN;
    while ((c = getchar()) != EOF) {
        if (c == '\t' || c == ' ' || c == '\n') {
            state = OUT;
        } else {
            if (state == OUT) {
                state = IN;
                putchar('\n');
            }
            putchar(c);
        }
    }
}

