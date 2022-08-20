#include <stdio.h>
int main()
{
    int e,f,c,d,res=0;
    scanf("%d%d%d",&e,&f,&c);
    d = e + f;
    while (d >= c){
        res += d / c;
        d = d - (d / c) * c + d / c;
    }
    printf("%d\n",res);
}