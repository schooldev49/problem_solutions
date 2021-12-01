#include <stdio.h>
int main()
{
    int n,temp,res=0;
    scanf("%d",&n);
    for (int i=0;i < n;i++){
        scanf("%d",&temp);
        res += temp;
    }
    printf("%d",res <= n/2 ? res : n-res);
}