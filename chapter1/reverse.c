//
// 增加将字符串反转方法
// Created by drafthj on 2021/10/13.
//
#include <stdio.h>

#define MAXLINE 5

int getLine(char line[], int maxLine);

void reverse(char s[], int len);

//打印最长的行
int main() {
    int len;
    char line[MAXLINE];
    while ((len = getLine(line, MAXLINE)) > 0) {
        reverse(line, len);
        printf("%s\n", line);
    }
    return 0;
}

//将一行数据读入到s中并且返回长度
int getLine(char s[], int lim) {
    int c, i;
    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        s[i] = c;
    }
    s[i] = '\0';
    return i;
}

void reverse(char s[], int len) {
    for (int i = 0; i < len / 2; ++i) {
        int temp = s[i];
        s[i] = s[len - 1 - i];
        s[len - 1 - i] = temp;
    }
}

