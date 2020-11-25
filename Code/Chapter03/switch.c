#include <stdio.h>

/* 统计数字、空白符及其他字符 */
int main()
{
    int c, i, nwhite,  nother, ndigit[10];

    nwhite = nother = 0;
    
    for (i = 0; i < 10; i++){
        ndigit[i] = 0;
    }

    while ((c = getchar()) != EOF) {
        switch (c)
        {
        /* 统计数字 */
        case '0': case '1': case '2': case '3': case '4':
        case '5': case '6': case '7': case '8': case '9':
            ndigit[c-'0']++;
            break;
        /* 统计空白符 */
        case ' ': case '\n': case '\t':
            nwhite++;
            break;
        /* 统计其他字符 */
        default:
            nother++;
            break;
        }
    }

    printf("digits =");
    for (i = 0; i < 10; i++) {
        printf(" %d", ndigit[i]);
    }

    printf(", white space = %d, other = %d\n", nwhite, nother);

    return 0;
}