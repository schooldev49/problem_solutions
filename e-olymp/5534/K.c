#include <stdio.h>
int main()
{
    int a,b, max=0,pre_max=0,temp=0;
    scanf("%d", &a);
    for (int i = 0; i < a; i++){
         scanf("%d", &b);
         if (b > max) {temp=max;max=b;}
         else if (b != max && b > pre_max) pre_max = b;
    }
    pre_max = temp > pre_max ? temp : pre_max;
    printf("%d\n", pre_max);
}