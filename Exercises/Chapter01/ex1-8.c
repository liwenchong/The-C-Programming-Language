/*
练习1-8 编写一个统计空格、制表符与换行符个数的程序
*/

#include <stdio.h>

int main()
{
    int c, nspace, ntab, nl;

    nspace = 0;
    ntab = 0;
    nl = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            nspace++;
        } else if (c == '\t') {
            ntab++;
        } else if (c == '\n') {
            nl++;
        }
    }

    printf("nspace = %d, ntab = %d, nl = %d\n", nspace, ntab, nl);

    return 0;
}