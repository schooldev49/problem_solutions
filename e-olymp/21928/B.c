#include <stdio.h>

int main(){
    int n;scanf("%d",&n);
    int a[n];
    for (int i=0;i < n;i++)scanf("%d",&a[i]);
    while (n--)printf("%d%c",a[n],n ? ' ':'\n');
}