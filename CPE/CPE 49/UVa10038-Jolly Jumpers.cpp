#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    while (cin >> n)
    {
        bool chick = true;
        vector<int> row(n);
        vector<int> minus(n - 1);
        for (int i = 0; i < n; i++)
            cin >> row[i];

        for (int i = 0; i < n - 1; i++)
        {
            minus[i] = abs(row[i] - row[i + 1]);
            if (minus[i] == 0)
            {
                chick = false;
                break;
            }
        }

        sort(minus.begin(), minus.end());
        for (int i = 0; i < n - 2; i++)
        {
            if (abs(minus[i] - minus[i + 1]) != 1)
            {
                chick = false;
                break;
            }
        }

        if (chick)
            cout << "Jolly\n";
        else
            cout << "Not jolly\n";
    }
}