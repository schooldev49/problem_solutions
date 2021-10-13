#include <stdio.h>

int is_prime(int n){
    if (!(n & 1))return n != 2 ? 0 : 1;
    int d = 3;
    while (d * d <= n){
        if (n % d == 0)return 0;
        d += 2;
    }
    return true;
}

int main(){
    int a,b,c=1;scanf("%d%d",&a,&b);
    while (a <= b){
        if (is_prime(a)){
            printf("%d\n",a);
            c=0;
        }
        a++;
    }
    if (c)printf("Absent\n");
}