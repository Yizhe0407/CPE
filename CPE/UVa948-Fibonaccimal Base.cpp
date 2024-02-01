#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int n;
    vector<ll> dict(39);
    ll fig, a;
    dict[0] = 1, dict[1] = 2, dict[2] = 3;
    for (int i = 3; i < 39; i++)
        dict[i] = dict[i - 1] + dict[i - 2];
    cin >> n;
    while (n--)
    {
        string ans = "";
        cin >> fig;
        a = fig;
        for (int i = 38; i >= 0; i--)
        {
            if (dict[i] <= fig && fig - dict[i] >= 0)
            {
                ans += '1';
                fig -= dict[i];
            }
            else if (ans[0] == '1')
                ans += '0';
        }
        cout << a << " = " << ans << " (fib)\n";
    }
}