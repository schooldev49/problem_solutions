#include <stdio.h>
int main()
{
    long a,b;
    scanf("%ld %ld",&a,&b);
    if (a % 2 == 0) ++a;
	if (b % 2 == 0) --b;
    printf("%ld",(a + b) / 2 * ((b - a) / 2 + 1));
}