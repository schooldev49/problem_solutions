#include <stdio.h>
int sum(int digit){
    int res=0;
    while (digit){
        res += digit%10;
        digit /= 10;
    }
    return res;
}

int main()
{
    int n,res=1,c=0;
    scanf("%d",&n);
    while (res <= n){
        res += sum(res);
        c++;
    }
    printf("%d",c);
}