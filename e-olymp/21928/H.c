#include <stdio.h>

int main()
{
    int n, a, b;
    scanf("%d%d", &n, &a);n--;
    while (n--){
        scanf("%d",&b);
        if ((a > 0 && b > 0) || (a < 0 && b < 0))printf("%d %d\n",a,b);
        a = b;
    }
}