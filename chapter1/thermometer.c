//
// Created by drafthj on 2021/10/12.
//
#include<stdio.h>
#define LOWER 0
#define UPPER 300
#define STEP 20

int main() {
    float fahr, celsius;
    float lower, upper, step;
    lower = LOWER; //�¶ȱ������
    upper = UPPER;//�¶ȱ������
    step = STEP; //����

    fahr = lower;
    printf("�����¶� �����¶�\n");
    while (fahr <= upper) {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%4.0f %7.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
    return 0;
}

