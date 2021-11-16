#include <stdio.h>

int main()
{
    int n, a,res=0;
    scanf("%d", &n);
    while (n--){
        scanf("%d",&a);
        if (a < 0)res += a;
    }
    printf("%d\n",res);
}