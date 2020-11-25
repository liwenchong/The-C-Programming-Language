/*
练习1-6 验证表达式getchar() != EOF的值是0还是1
*/

#include <stdio.h>

int main()
{
    int c;

    while (c = getchar() != EOF) {
        printf("%d\n", c);
    }
    printf("%d - at EOF\n", c);

    return 0;
}
