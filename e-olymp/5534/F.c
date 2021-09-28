#include <stdio.h>
#include <math.h>
int main()
{
    long long a, n;
    long long res = 0;
    scanf("%lld%lld", &n, &a);
    if (a == 1){
        printf("%lld", n * (n + 1) / 2);
        return 0;
    }
    for (int i = 1; i <= n; i++)
        res += i * pow(a, i);
    printf("%lld", res);
}