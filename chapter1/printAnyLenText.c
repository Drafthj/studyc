//
// ���Դ�ӡ���ⳤ�������еĳ��ȣ��������ܶ�Ĵ�ӡ�ı�
// Created by drafthj on 2021/10/13.
//
#include <stdio.h>

#define MAXLINE 5

int getLine(char line[], int maxLine);

void copy(char to[], char from[]);

//��ӡ�����
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

//��һ�����ݶ��뵽s�в��ҷ��س���
int getLine(char s[], int lim) {
    int c, i, j;
    //Ϊ�˾����ܴ�ӡ��ĳ��ȣ��Ͳ���Ҫlimit����
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

/*��from���Ƶ�to*/
void copy(char to[], char from[]) {
    int i = 0;
    while ((to[i] = from[i]) != '\0') {
        i++;
    }
}