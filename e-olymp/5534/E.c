#include <stdio.h>
int main()
{
    int a;
    double sum, product=1;
    scanf("%d",&a);
    while (a){
        sum += a % 10;
        product *= a % 10;
        a /= 10;
    }
    printf("%.3lf\n",product / sum);
}