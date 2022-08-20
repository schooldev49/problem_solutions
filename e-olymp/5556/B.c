#include <stdio.h>

int gcd(int a, int b){
    while (a && b)
    {
        a %= b;
        b %= a;   
    }
    return a;
}

int main()
{
    int a=24,b=20;
    printf("%d",gcd(a,b));
}