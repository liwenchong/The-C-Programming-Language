/*
练习1-9 编写一个将输入复制到输出的程序，并将其中连续的多个空格用一个空格代替。
*/

#include <stdio.h>

int main()
{
    int c;
    int n = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ' && n == 0) {
            putchar(c);
            n = 1;
        } else if (c == ' ' && n == 1) {
            ;
        } else {
            putchar(c);
            n = 0;
        }
    }
    
    return 0;
}