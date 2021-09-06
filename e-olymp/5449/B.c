#include <stdio.h>
int main()
{
    int a,c;
    scanf("%d",&a);
    char arr[3][4] = {"GCV", "VGC", "CVG"};
    for (int b=0;b < a;b++){
        scanf("%d",&c);
        printf("%s\n",arr[c%3]);
    }
}