#include <stdio.h>
int main()
{
    int n,a=0,b=0,temp;
    scanf("%d",&n);
    for (int i=0;i < n;i++){
        for (int j=0;j < n;j++){
            scanf("%d",&temp);
            if (i==j)a += temp;
            if(n-i-1 == j)b += temp;
        }
    }
    printf("%d %d",a,b);
}