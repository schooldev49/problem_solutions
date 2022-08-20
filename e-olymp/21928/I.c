#include <stdio.h>

int main()
{
    int n, a,res=0;
    scanf("%d", &n);
    while (n--){
        scanf("%d",&a);
        res += a > 0;
    }
    printf("%d\n",res);
}