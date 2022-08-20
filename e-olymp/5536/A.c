#include <stdio.h>
int main()
{
    int n,c=0;
    scanf("%d",&n);
    do{
        n /= 10;
        c++;
    }
    while (n);
    printf("%d",c);
}