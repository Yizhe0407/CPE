// An Easy Problem
#include <stdio.h>
#include <string.h>
#include <iostream>

int main()
{
    char s[1000];
    int sum, d, max = 0, r;
    while (scanf("%s", s) != EOF)
    {
        max = 1;
        sum = 0;
        for (int i = 0; s[i] != 0; i++)
        {
            d = 0;
            if (s[i] >= '0' && s[i] <= '9')
                d = s[i] - '0';
            if (s[i] >= 'A' && s[i] <= 'Z')
                d = s[i] - 'A' + 10;
            if (s[i] >= 'a' && s[i] <= 'z')
                d = s[i] - 'a' + 36;
            sum += d;

            if (d > max)
                max = d;
        }

        for (r = max + 1; r <= 62; r++)
        {
            if ((sum % (r - 1)) == 0)
                break;
        }
        if (r <= 62)
            printf("%d\n", r);
        else
            printf("such number is impossible!\n");
    }
    return 0;
}