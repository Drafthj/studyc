//
// 打印输入中单词的直方图（横向和竖向）
// Created by drafthj on 2021/10/12.
//
#include <stdio.h>

#define MAX 10

void horizontal();

void vertical();

int main() {
    vertical();
}

void vertical() {
    int c, wordLen, overMax;
    int wordCount[MAX + 1];
    c = overMax = wordLen = 0;
    for (int i = 0; i <= MAX; ++i) {
        wordCount[i] = 0;
    }
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            if (wordLen != 0) {
                if (wordLen > MAX) {
                    overMax++;
                } else {
                    wordCount[wordLen]++;
                }
                wordLen = 0;
            }
        } else {
            wordLen++;
        }
    }
    //print vertical
    for (int i = 1; i < MAX + 1; ++i) {
        printf("%d\t", i);
    }
    printf(">%d\n", MAX);

    int max = 0;
    for (int i = 1; i < MAX + 1; ++i) {
        if (max < wordCount[i]) max = wordCount[i];
    }
    if (max < overMax) max = overMax;

    for (int i = 1; i <= max; ++i) {
        for (int j = 1; j < MAX + 1; ++j) {
            if (wordCount[j] >= i) {
                printf("-\t");
            } else {
                printf(" \t");
            }
        }
        if (overMax >= i) {
            printf("-\t");
        } else {
            printf(" \t");
        }
        printf("\n");
    }

}

void horizontal() {
    int c, wordLen, overMax;
    int wordCount[MAX + 1];
    c = overMax = wordLen = 0;
    for (int i = 0; i <= MAX; ++i) {
        wordCount[i] = 0;
    }
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            if (wordLen != 0) {
                if (wordLen > MAX) {
                    overMax++;
                } else {
                    wordCount[wordLen]++;
                }
                wordLen = 0;
            }
        } else {
            wordLen++;
        }
    }
    //print horizon
    for (int i = 1; i < MAX + 1; ++i) {
        printf("%3d:", i);
        for (int j = 0; j < wordCount[i]; ++j) {
            printf("|");
        }
        printf("\n");
    }
    printf(">%d:", MAX);
    for (int i = 0; i < overMax; ++i) {
        printf("|");
    }
    printf("\n");
}
