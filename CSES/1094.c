#include <stdio.h>

int main(){
    int n;scanf("%d",&n);
    long long res = 0;
    int a,b;scanf("%d",&a);
    while(--n){
        scanf("%d",&b);
        if (a > b) res += a - b;
        if (a < b) a = b;
    }
    printf("\n%lld\n",res);
    
}