#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,b,c,o;
    scanf("%d %d %d",&a,&b,&c);
    o += abs(a) % 2 + abs(b) % 2 + abs(c) % 2;
    if (o and o != 3){
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
}