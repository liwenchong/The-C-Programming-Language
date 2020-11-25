#include <stdio.h>

/* 将输入复制到输出；版本1 */
// int main()
// {
//     int c;

//     c = getchar();

//     while (c != EOF) {
//         putchar(c);
//         c = getchar();
//     }

//     return 0;
// }

/* 将输入复制到输出；版本2 */
int main()
{
    int c;

    while ((c = getchar()) != EOF) {
        putchar(c);
    }


    return 0;
}