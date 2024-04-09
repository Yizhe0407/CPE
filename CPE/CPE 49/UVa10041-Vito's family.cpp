#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, cs, median, sum;

    cin >> cs;
    for (int i = 0; i < cs; i++)
    {
        cin >> n;
        vector<int> v(n);
        for (int k = 0; k < n; k++)
            cin >> v[k];

        sort(v.begin(), v.end());
        median = n / 2;
        sum = 0;
        for (int k = 0; k < n; k++)
            sum += abs(v[k] - v[median]);

        printf("%d\n", sum);
    }
}