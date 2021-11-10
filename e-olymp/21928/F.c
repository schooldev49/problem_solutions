#include <stdio.h>

int main(){
    int n,t;scanf("%d",&n);
    for (int i=1;i <= n;i++){
        scanf("%d",&t);
        if (i % 2)printf("%d%c",t,i != n ? ' ':'\n');
    }
}