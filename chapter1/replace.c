//
// Created by drafthj on 2021/10/12.
//
#include "stdio.h"
#include "conio.h"
int main() {
    int c;
    while((c = getch()) != EOF) {
        switch (c) {
            case '\t':
                putchar('\\');
                putchar('t');
                break;
            case '\b':
                putchar('\\');
                putchar('b');
                break;
            case '\\':
                putchar('\\');
                putchar('\\');
                break;
            default:
                putchar(c);
        }
    }
}

