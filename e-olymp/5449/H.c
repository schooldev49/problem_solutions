#include <stdio.h>
int main()
{
    char s;
    int a, b, c, d;
    scanf("%d%c%d%c%d%c%d", &a, &s, &b, &s, &c, &s, &d);
    if (a < 256 && b < 256 && c < 256 && d < 256) printf("1\n");
    else printf("0\n");
}