//
// 可以打印任意长度输入行的长度，并尽可能多的打印文本
// Created by drafthj on 2021/10/13.
//
#include <stdio.h>

#define MAXLINE 5

int getLine(char line[], int maxLine);

void copy(char to[], char from[]);

//打印最长的行
int main() {
    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];

    max = 0;
    while ((len = getLine(line, MAXLINE)) > 0) {
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    }
    if (max > 0) {
        printf("maxlen:%d\n", max);
        printf("%s", longest);
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