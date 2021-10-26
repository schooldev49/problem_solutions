#include <stdio.h>
#include <stdlib.h>
int gcd(int a, int b){
    while (b)b ^= a ^= b ^= a %= b;
    return a;
}

int main()
{
    int n,temp;
    scanf("%d", &n);getchar();
    char str[10000];
    for (int i=0;i < n; i++){
        scanf("%[^\n]", &str);getchar();
        
    }
    
}