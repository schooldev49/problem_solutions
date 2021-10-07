#include <stdio.h>
int find_element(int val, int arr[32], int length)
{
    for (int kk = 0; kk < length; kk++)
    {
        if (arr[kk] == val)
            return 1;
    }
    return 0;
}

int main()
{
    int a, b, x, y;
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        int check = 0, arr[32] = {}, index = 0;
        scanf("%d", &b);
        for (int j = 0; j < b; j++)
        {
            scanf("%d%d", &x, &y);
            int temp[32] = {}, temp_index = 0;
            if (!check)
            {
                while (x <= y)
                {
                    arr[index] = x;
                    x++;
                    index++;
                    check++;
                }
            }
            else
            {
                while (x <= y)
                {
                    temp[temp_index] = x;
                    x++;
                    temp_index++;
                }
                for (int i = 0; i < index; i++)
                {
                    if (arr[i] && !find_element(arr[i], temp, index))arr[i] = 0;
                }
            }
        }
        int res = 0;
        for (int i = 0; i < index; i++)
        {
            if (arr[i])
            {
                res = 1;
                break;
            }
        }
        printf(res ? "YES\n" : "NO\n");
    }
}