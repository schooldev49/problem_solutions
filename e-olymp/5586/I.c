#include <stdio.h>
long long gcd(long long a, long long b)
{
    while (b)
        b ^= a ^= b ^= a %= b;
    return a;
}

int main()
{
    long long a, b;
    scanf("%lld%lld", &a, &b);
    long long g = gcd(a, b);
    long long f = a / g, s = b / g;
    printf("%lld %lld",f,s);
}