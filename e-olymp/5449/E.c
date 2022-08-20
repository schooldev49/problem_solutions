#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if (n == 12 or n == 1 or n==2){
        printf("Winter\n");
    }
    else if (n >= 3 and n <= 5){
        printf("Spring\n");
    }
    else if (n >= 6 and n <= 8){
        printf("Summer\n");
    }
    else if (n >= 9 and n <= 11){
        printf("Autumn\n");
    }
}