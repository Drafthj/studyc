//
// 打印长度大于80个字符的行,用PRING_LEN变量来代替
// Created by drafthj on 2021/10/13.
//
#include <stdio.h>
#define MAXLINE 100
//需要打印大于的长度
#define PRINT_LEN 10
int getLine(char line[], int maxLine);
void copy(char to[], char from[]);
int main() {
    int len;
    char line[MAXLINE];
    char longest[PRINT_LEN];

    while ((len = getLine(line, MAXLINE)) > 0) {
        if (len > PRINT_LEN) {
            copy(longest, line);
            printf("%s", longest);
        }
    }
    return 0;
}

//将一行数据读入到s中并且返回长度
int getLine(char s[], int lim) {
    int c, i, j;
    //为了尽可能打印多的长度，就不需要limit限制
    for (i = 0, j = 0; (c = getchar()) != EOF && c != '\n'; ++i) {
        if (i < lim - 1) {
            s[j++] = c;
        }
    }
    if (c == '\n') {
        s[j++] = c;
        ++i;
    }
    s[j] = '\0';
    return i;
}

/*将from复制到to*/
void copy(char to[], char from[]) {
    int i = 0;
    while ((to[i] = from[i]) != '\0') {
        i++;
    }
}