#include <stdio.h>

int main(){
    float xn,xm,yn,ym,a;
    scanf("%f%f%f%f%f",&xn,&yn,&xm,&ym,&a);
    printf("%.2f %.2f", (xn + a * xm) / (a + 1), (yn + a * ym) / (a + 1));
}