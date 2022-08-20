#include <stdio.h>

int main(){
    int n,i;scanf("%d",&n);
    int orig = n;
    long long check;
    while(--n){
        scanf("%d",&i);check += i -= n;
    }
    printf("%lld\n",orig - check);
}