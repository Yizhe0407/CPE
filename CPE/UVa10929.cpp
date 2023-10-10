// You can say 11
#include <stdio.h>

int main()
{
    long long figure;
    while (scanf("%lld", &figure))
    {
        if (figure == 0)
        {
            break;
        }
        if (figure % 11 == 0)
        {
            printf("%lld is a multiple of 11.\n", figure);
        }
        else
        {
            printf("%lld is not a multiple of 11.\n", figure);
        }
    }
}