#include <stdio.h>
#include <math.h>
using namespace std;
int main()
{
    long long a,b;
    scanf("%lld %lld",&a,&b);
    printf("%lld\n",(b - a + 1) * (a + b) / 2);
}