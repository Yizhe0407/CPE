#include <stdio.h>
#include <iostream>

int main()
{
    int n1, n2;
    int count = 1, nextcount;
    scanf("%d %d", &n1, &n2);
    for (int i = n1; i <= n2; i++)
    {
        while (i != 1)
        {
            if (i % 2 != 0)
            {
                i = 3 * i + 1;
                count += 1;
            }
            else
            {
                i /= 2;
                count += 1;
            }
        }
        if (nextcount > count)
        {
            nextcount = count;
        }
    }
    printf("%d", nextcount);
}