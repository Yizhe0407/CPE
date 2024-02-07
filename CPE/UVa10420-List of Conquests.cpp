#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

int comp(const void *a, const void *b)
{
    return strcmp((char *)a, (char *)b);
}

int main()
{
    int n, j, i;
    char dict[2000][80];
    cin >> n;
    cin.ignore();
    for (i = 0; i < n; i++)
    {
        gets(dict[i]);
        for (j = 0; dict[i][j] != ' '; j++)
            ;
        dict[i][j] = '\0';
    }
    qsort(dict, n, 80, comp);

    int k = 0;
    for (i = 0; i < n; i++)
    {
        if (strcmp(dict[i], dict[k]) != 0)
        {
            cout << dict[k] << ' ' << i - k << endl;
            k = i;
        }
    }
    cout << dict[k] << ' ' << i - k << endl;
}