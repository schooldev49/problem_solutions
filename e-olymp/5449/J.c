#include <stdio.h>
int main()
{
    int a, b, c, d, e, f, g, h, i, j;
    scanf("%d %d %d %d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j);
    if (i > e && i < g && j < f && j > h){
        printf("SAD\n");
    }
    else if (i >= a && i <= c && j <= b && j >= d){
        printf("HAPPY\n");
    }
    else{
        printf("SAD\n");
    }
}