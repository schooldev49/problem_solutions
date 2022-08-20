#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d",&a);
    b = a / 100;
    c = a % 10;
    if (b > c){
        printf("%d\n",b);
    }
    else if (b < c){
        printf("%d\n",c);
    }
    else{
        printf("=\n");
    }
    
}