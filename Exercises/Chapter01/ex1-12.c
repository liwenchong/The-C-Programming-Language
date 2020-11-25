/*
练习1-12 编写一个程序，以每行一个单词的形式打印其输出
*/

#include <stdio.h>

// int main()
// {
//     int c;
    
//     while ((c = getchar()) != EOF) {
//         if (c == ' ' || c == '\t') {
//             printf("\n");
//         } else {
//             putchar(c);
//         }
//     }

//     return 0;
// }

#define IN 1
#define OUT 0

int main()
{
    int c, state;

    state = OUT;

    while ((c  = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            if (state ==  IN) {
                putchar('\n');
                state = OUT;
            }
        } else if (state == OUT) {
            state = IN;
            putchar(c);
        } else {
            putchar(c);
        }
    }

    return 0;
}