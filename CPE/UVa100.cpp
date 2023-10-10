#include <stdio.h>
#include <iostream>

int main()
{
    int n1, n2;
    int count = 0, nextcount = 0;
    scanf("%d %d", &n1, &n2);
    for (int i = n1; i <= n2; i++)
    {
        while (true)
        {
            if (i == 1)
            {
                count += 1;
                break;
            }
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