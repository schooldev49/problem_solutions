#include <stdio.h>
int main()
{
    long long a,b,res=0;
    scanf("%lld%lld",&a,&b);
    if (a < 0) a *= -1;
    while (a){
        res += a % 10 == b;
        a /= 10;
    }
    printf("%lld",res);
}