#include <stdio.h>
int main()
{
    float a,b;
    int c=0;
    scanf("%f%f",&a,&b);
    while (a > 1){
        a /= b;
        if (a > 1)c++;
    }
    printf("%d",c);
}