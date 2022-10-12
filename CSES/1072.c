#include <stdio.h>
#include <math.h>

int main(){
    int n;scanf("%d",&n);
    for (long double i = 1; i <= n; i++){
        printf("%lld\n",(long long)(0.5 * powl(i,4) - 4.5 * powl(i,2) + 12*i - 8));
    }
}