#include <stdio.h>
#include <math.h>
int main(){
    int n;scanf("%d",&n);
    printf("%.0lf\n",fmod(pow(2,n),1000000007));
}