#include <stdio.h>

int main(){
    int n,t;scanf("%d",&n);
    while(n--){
        scanf("%d",&t);
        if (t >= 0)t+=2;
        printf("%d%c",t,n ? ' ':'\n');
    }
}