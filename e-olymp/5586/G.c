#include <stdio.h>
int main()
{
    long long a, b,temp;
    scanf("%lld%lld",&a,&b);

    while (b != 0)
    {
        a %= b;
        temp = a;
        a = b;
        b = temp;
    }
    printf("%lld",a);
}