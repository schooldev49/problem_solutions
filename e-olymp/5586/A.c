#include <stdio.h>

int gcd(int num1, int num2)
{
    if (num1 == 0)return num2;
    return gcd(num2 % num1, num1);
}

int lcm(int num1, int num2)
{
    return (num1 / gcd(num1, num2)) * num2;
}

int main()
{
    int n, res, temp;
    scanf("%d%d", &n, &res);
    while (--n)
    {
        scanf("%d", &temp);
        res = lcm(res, temp);
    }
    printf("%d\n", res);
}