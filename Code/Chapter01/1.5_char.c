#include <stdio.h>

/* 统计输入的字符数：版本1 */
// int main()
// {
//     long nc;

//     nc = 0;
//     while (getchar() != EOF) {
//         nc++;
//     }
//     printf("%ld\n", nc);

//     return 0;
// }

/* 统计输入的字符数 */
int main()
{
    double nc;

    for (nc = 0; getchar() != EOF; nc++) {
        ;
    }
    printf("%.0f\n", nc);

    return 0;
}