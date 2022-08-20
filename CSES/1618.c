#include <stdio.h>
#include <math.h>

int main(){
    int n;scanf("%d",&n);
    int i = 1;
    long long res = 0,temp;
    while (i){
        temp = n / pow(5,i++);
        if(temp)res += temp;
        else i=0;
    }
    printf("%lld\n",res);
}