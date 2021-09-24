#include <stdio.h>
int main()
{
    char a,b,c;
    scanf("%c%c%c",&a,&b,&c);
    if (a == '-')printf("%c",c);
    else printf("%c",b);
}