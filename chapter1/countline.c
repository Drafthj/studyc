//
// Created by drafthj on 2021/10/12.
//
#include <stdio.h>
int main() {
    int c;
    long nc;
    while ((c = getchar()) != EOF)
        if(c == '\n')
            ++nc;
    printf("%ld", nc);
}

