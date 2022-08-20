#include <stdio.h>
#include <math.h>
using namespace std;
int main()
{
    double a,b;
    scanf("%lf %lf",&a, &b);
    printf("%d %d\n",(int)ceil(a/b),(int)(a-b + 1));
}