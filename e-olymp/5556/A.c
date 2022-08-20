#include <stdio.h>

double max(double a, double b)
{
    return a > b ? a : b;
}
double min(double a, double b)
{
    return a > b ? b : a;
}

int main()
{
    double x, y, z;
    scanf("%lf%lf%lf", &x, &y, &z);
    double a = max(x,y),b = max(y,z), c = x+y+z;
    if (a <= b && a <= c)printf("%lf",a);
    else if (b <= a && b <= c)printf("%lf",b);
    else printf("%lf",c);
}