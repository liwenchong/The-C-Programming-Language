#include <stdio.h>

/* 当fahr= 0, 20, ..., 300时，分别打印华氏温度与摄氏温度对照表 */
int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;  /* 温度表的下限 */
    upper = 300;    /* 温度表的上限 */
    step = 20;  /* 步长 */

    fahr = lower;

    while (fahr <= upper) {
        celsius = (fahr - 32) * 5 / 9 ;
        printf("%3.0f\t%6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }

    return 0;
}
