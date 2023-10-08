// 因數分解
#include <stdio.h>
int main()
{
    int input;
    scanf("%d", &input);
    for (int i = 2; i <= input; i++)
        if (input % i == 0)
        {
            int r = 0, j = 0;
            while (r == 0)
            {
                input = input / i;
                r = input % i;
                j++;
            }
            if (j == 1)
                printf("%d", i);
            else
                printf("%d^%d", i, j);
            if (input != 1)
                printf(" * ");
        }
    return 0;
}