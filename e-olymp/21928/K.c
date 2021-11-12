#include <stdio.h>

int main()
{
    int n, res = 0, max = -10000000,count = 0;
    scanf("%d", &n);
    int l[n];
    for (int i=0;i < n;i++){
        scanf("%d",&l[i]);
        if (l[i] > max) max = l[i];
        res += l[i];
    }
    for (int i = 0; i < n; i++)count += max == l[i];
    res -= max * count;
    printf("%d\n", res);
}