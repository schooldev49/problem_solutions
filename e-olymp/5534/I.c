#include <stdio.h>
int main()
{
    long long a;
    scanf("%lld",&a);
    if (!a){
        printf("0");
        return 0;
    }
    while (a){
        printf("%d",a % 10);
        a /= 10;
    }
}