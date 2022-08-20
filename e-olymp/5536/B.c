#include <stdio.h>
void stars(int star){
    for (int i = 0; i < star; i++)printf("%c", '.');
    printf("%c",'*');
    for (int i = 0; i < star; i++)printf("%c", '.');
    printf("%c",'\n');
}

int main()
{
    int n;
    scanf("%d",&n);
    for (int i=0;i < n;i++)stars(n);
    for (int i=0;i <= n*2;i++)printf("%c",'*');
    printf("%c",'\n');
    for (int i = 0; i < n; i++)stars(n);
}