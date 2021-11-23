#include <stdio.h>

int main()
{
    int n,count=0;scanf("%d", &n);
    int l[n];
    for (int i=0;i < n;i++)scanf("%d",&l[i]);n--;
    for (int i = 1; i < n; i++)count += l[i] > l[i-1] && l[i] > l[i+1];
    printf("%d\n",count);
}