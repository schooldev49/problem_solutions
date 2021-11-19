#include <stdio.h>

int main()
{
    int n, a = 0, t;
    scanf("%d", &n);
    int l[n];
    while (n--)
    {
        scanf("%d", &t);
        if (t > 0)
            l[a++] = t;
    }
    if (a)
    {
        printf("%d\n", a);
        for (int i = 0; i < a; i++)
            printf("%d%c", l[i], i != a - 1 ? ' ' : '\n');
    }
    else
        printf("NO\n");
}