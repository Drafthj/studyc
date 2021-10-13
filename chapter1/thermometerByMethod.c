//
// Created by drafthj on 2021/10/13.
//
#include<stdio.h>
#define LOWER 0
#define UPPER 300
#define STEP 20
float getCelsius(float fahr);
int main() {
    float fahr, celsius;
    float lower, upper, step;
    lower = LOWER; //温度表的下限
    upper = UPPER;//温度表的上限
    step = STEP; //步长

    fahr = lower;
    printf("华氏温度 摄氏温度\n");
    while (fahr <= upper) {
        celsius = getCelsius(fahr);
        printf("%4.0f %7.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
    return 0;
}
float getCelsius(float fahr) {
    return (5.0 / 9.0) * (fahr - 32.0);
}

