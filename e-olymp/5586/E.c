#include <stdio.h>
int gcd(int a, int b){
    while (b)b ^= a ^= b ^= a %= b;
    return a;
}

int main()
{
    int n,res,temp;
    scanf("%d%d",&n,&res);
    for (int i=1;i < n;i++){
        scanf("%d",&temp);
        res = gcd(res,temp);
    }
    printf("%d",res);
}