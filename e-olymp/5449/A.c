#include <stdio.h>
int main()
{
    int k,w,a1,b1,a2,b2,a3,b3;
    scanf("%d %d\n%d %d %d %d %d %d",&k,&w,&a1,&b1,&a2,&b2,&a3,&b3);
    if ((b1 >= k and a1 <= w) || (b2 >= k and a2 <= w) || (b3 >= k and a3 <= w)){
        printf("YES\n");
    }
    else if((b1 + b2 >= k and a1 + a2 <= w) or (b1 + b3 >= k and a1 + a3 <= w) or (b2 + b3 >= k and a2 + a3 <= w) or (a1+a2+a3 <= w and b1+b2+b3 >= k)){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
}