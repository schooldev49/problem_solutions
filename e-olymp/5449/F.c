#include <stdio.h>
int main()
{
    int a,b,c,x,y;
    scanf("%d %d %d %d %d",&a,&b,&c,&x,&y);
    if ((a <= x && c <= y) || (a <= y && c <= x) || (b <= x && c <= y) || (b <= y && c <= x) || (a <= x && b <= y) ||
    (b <= x && a <= y)){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
}