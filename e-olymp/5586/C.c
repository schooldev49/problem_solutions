#include <stdio.h>

int gcd(int a, int b)
{
    while (b)
        b ^= a ^= b ^= a %= b;
    return a;
}

int main()
{
    int n,res,temp;
    scanf("%d%d",&n,&res);
    while (--n){
        scanf("%d",&temp);
        res = gcd(res,temp);
    }
    printf("%d",res);
}