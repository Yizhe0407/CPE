// 沒有通過編譯
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, j;
    string a, b;
    while (getline(cin, a), getline(cin, b))
    {
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        for (i = 0, j = 0; i < a.size() && j < b.size();)
        {
            if (a[i] == b[j] && a[j] != ' ' && b[j] != ' ')
            {
                cout << a[i];
                i++, j++;
            }
            else if (a[i] > b[j])
                j++;
            else
                i++;
        }
        cout << '\n';
    }
}

// 有通過編譯
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define maxn 1001

int compare(const void *a, const void *b)
{
    char *pa = (char *)a;
    char *pb = (char *)b;
    return *pa - *pb;
}

int main()
{
    char a[maxn], b[maxn];
    int i, j;

    while (gets(a) != NULL && gets(b) != NULL)
    {
        qsort(a, strlen(a), sizeof(char), compare);
        qsort(b, strlen(b), sizeof(char), compare);
        for (i = 0, j = 0; i < strlen(a) && j < strlen(b);)
        {
            if (a[i] == b[j] && a[i] != ' ' && b[j] != ' ')
            {
                printf("%c", a[i]);
                i++, j++;
            }
            else if (a[i] > b[j])
                j++;
            else
                i++;
        }
        printf("\n");
    }
    return 0;
}
