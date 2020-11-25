#include <stdio.h>
#include <string.h>

void reverse(char s[]);

int main()
{
    char s[10] = "liwe";
    reverse(s);
    printf("%s\n", s);
    return 0;
}

/* reverse函数：倒置字符串s中的各个字符的位置 */
void reverse(char s[])
{
    int c, i, j;

    for (i = 0, j = strlen(s)-1; i < j; i++, j--) {
        c =  s[i];
        s[i] = s[j];
        s[j] = c;
    }
}