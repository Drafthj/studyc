//
// Created by drafthj on 2021/10/12.
//
#include <stdio.h>

int main() {
    double nc;
    for (nc = 0; getchar() != EOF; ++nc);
    printf("%.0f", nc);
}
