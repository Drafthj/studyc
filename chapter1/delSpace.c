//
// 删除每个输入行末尾的空格及制表符，并删除完全是空格的行数
// Created by drafthj on 2021/10/13.
//
#include <stdio.h>

#define MAXLINE 100

int getLine(char line[], int maxLine);

int copy(char to[], char from[]);

//打印最长的行
int main() {
    char line[MAXLINE];
    char longest[MAXLINE];
    int len, copyLen;
    while ((len = getLine(line, MAXLINE)) > 0) {
        copyLen = copy(longest, line);
        if (copyLen > 1) {
            printf("%s\n", longest);
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
    s[j] = '\0';
    return i;
}


/*将from复制到to*/
int copy(char to[], char from[]) {
    int i = 0, j = 0;
    while (from[i] != '\0') {
        if (from[i] != '\t' && from[i] != ' ') {
            to[j++] = from[i];
        }
        i++;
    }
    to[j] = '\0';
    return j;
}
