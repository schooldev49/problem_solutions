#include <stdio.h>

int main()
{
    int n, a, b, check = 0;
    scanf("%d%d", &n, &a);
    n--;
    while (n--)
    {
        scanf("%d", &b);
        if (b > a)
        {
            if (check++)
                putchar(' ');
            printf("%d", b);
        }
        a = b;
    }
    putchar('\n');
}