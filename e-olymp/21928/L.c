#include <stdio.h>

int main()
{
    int n, max = -10000000,count = 0;
    scanf("%d", &n);
    int l[n];
    for (int i=0;i < n;i++){
        scanf("%d",&l[i]);
        if (l[i] > max) max = l[i];
    }
    for (int i = 0; i < n; i++)count += max == l[i];
    printf("%d\n",count);
}