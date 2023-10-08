// vito's_fimaly
#include <stdlib.h>
#include <stdio.h>

int comp(const void *a, const void *b)
{
    return *(int *)a - *(int *)b;
}

int main()
{
    int s[500];
    int n, cs, i, k, median, sum;

    scanf("%d", &cs);
    for (i = 0; i < cs; i++)
    {
        scanf("%d", &n);
        for (k = 0; k < n; k++)
            scanf("%d", &s[k]);

        qsort(s, n, sizeof(int), comp);
        median = s[n / 2];
        sum = 0;
        for (k = 0; k < n; k++)
            sum += abs(s[k] - median);

        printf("%d\n", sum);
    }
    return 0;
}