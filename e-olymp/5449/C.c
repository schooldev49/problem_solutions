#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if (a >= 1 && a <= 3){
        printf("Initial\n");
    }
    else if (a <= 6){
        printf("Average\n");
    }
    else if (a <= 9){
        printf("Sufficient\n");
    }
    else{
        printf("High\n");
    }
}