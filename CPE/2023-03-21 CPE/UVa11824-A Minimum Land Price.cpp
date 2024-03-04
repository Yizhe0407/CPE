#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> v;
        long long int n, ans = 0;

        while (cin >> n && n != 0)
            v.push_back(n);
        sort(v.begin(), v.end(), greater<int>());

        for (int i = 0; i < v.size(); i++)
        {
            long long int temp = 1;
            for (int j = 0; j < i + 1; j++)
                temp *= v[i];
            ans += 2 * temp;
        }
        if (ans > 5000000)
            cout << "Too expensive\n";
        else
            cout << ans << endl;
    }
}