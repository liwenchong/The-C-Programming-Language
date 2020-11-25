/*
练习1-10 编写一个将输入复制到输出的程序，并将其中的制表符替换为\t，将回退符替换为\b，将反斜杠符替换为\\。
*/

#include <stdio.h>

int main()
{
    int c;

    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            printf("\\t");
        } else if (c == '\b') {
            printf("\\b");
        } else if (c == '\\') {
            printf("\\\\");
        } else {
            putchar(c);
        }
    }

    return 0;
}