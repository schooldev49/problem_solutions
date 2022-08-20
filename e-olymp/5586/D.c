#include <stdio.h>

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    while (b)b ^= a ^= b ^= a %= b;
    printf("%d",a);
}