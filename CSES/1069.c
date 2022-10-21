#include <stdio.h>

int main(){
    int max = 0,temp = 1, i = 1;
    char s[1000000];scanf("%s",&s);
    char t = s[0];
    while (s[i]){
        if (s[i] == t)temp += 1;
        else {
            max = max > temp ? max : temp;
            temp = 1;
            t = s[i];
        }
        i++;
    }
    printf("%d\n",max > temp ? max : temp);
}