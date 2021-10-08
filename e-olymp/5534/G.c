#include <stdio.h>
int main()
{
    int a,b;
    long res = 1;
    scanf("%d%d",&a,&b);
    for (int i=0;i < a; i ++){
        if (res > b)
            res -= b;
        res *= 2;
    }
    printf("%ld",res);
}