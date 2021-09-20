#include <stdio.h>
#include <math.h>
using namespace std;
int main()
{
    int a,b = 0;
    scanf("%d",&a);
    if (a % 10){
        printf("-1");
    }
    else{
        b += a / 500;
        a -= 500 * b;
        b += a / 200;
        a -= 200 * (a/200);
        b += a / 100;
        a -= 100 * (a/100);
        b += a / 50;
        a -= 50 * (a/50);
        b += a / 20;
        a -= 20 * (a/20);
        b += a / 10;
        printf("%d\n",b);
    }
}