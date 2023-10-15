// You can say 11

#include <stdio.h>
#include <string.h>

int main()
{
    char d[1000];
    int n1 = 0, n2 = 0;
    while (scanf("%s", d) != 0)
    {
        for (int i = 0; i < strlen(d); i += 2)
            n1 += d[i] - '0';

        for (int i = 1; i < strlen(d); i += 2)
            n2 += d[i] - '0';

        if (n1 % 11 == n2 % 11)
        {
            printf("%s is a multiple of 11.\n", d);
        }
        else
        {
            printf("%s is not a multiple of 11.\n", d);
        }
    }

    return 0;
}