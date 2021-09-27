#include <stdio.h>
int main()
{
    int a,res=0;
    scanf("%d",&a);
    while (a){
        res += a % 10 == 5;
        a /= 10;
    }
    printf("%d",res);
}