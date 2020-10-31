/*
练习1-4 编写一个程序打印摄氏温度转换为相应华氏温度的转换表
*/

#include <stdio.h>

int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 40;
    step = 1;

    celsius = lower;

    while (celsius <= upper) {
        fahr = 9.0 / 5.0 * celsius + 32.0;
        printf("%3.1f\t%6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}