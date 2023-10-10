// The 3n + 1 problem
#include <stdio.h>

int main()
{
    int n1, n2, num;
    int count[3], nextcount = 0;
    while (scanf("%d %d", &n1, &n2) != EOF)
    {
        for (int i = n1; i <= n2; i++)
        {
            num = i;
            count[1] = 1;
            while (num != 1)
            {
                if (num % 2 != 0)
                {
                    num = (3 * num) + 1;
                }
                else
                {
                    num /= 2;
                }
                count[1] += 1;
            }
            if (count[1] > count[0])
            {
                count[0] = count[1];
            }
        }
        printf("%d %d %d \n", n1, n2, count[0]);
        count[0] = 0;
    }
    return 0;
}