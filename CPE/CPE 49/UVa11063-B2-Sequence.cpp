#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum, a = 1, b = 0;
    bool isB2 = 1;
    while (cin >> n && n != EOF)
    {
        vector<int> v(n);
        vector<int> dict(n * n);
        for (int i = 0; i < n; i++)cin >> v[i];

        for (int j = 0; j < n; j++)
            for (int k = j; k < n; k++)dict[b++] = v[j] + v[k];

        for (int j = 0; j < dict.size(); j++)
        {
            for (int k = j + 1; k < dict.size(); k++)
                if (dict[j] == dict[k] && dict[j] != 0 && dict[k] != 0) isB2 = 0;
        }
        cout << "Case #" << a++ << ": ";
        if (isB2)
            cout << "It is a B2-Sequence.\n" << endl;
        else
            cout << "It is not a B2-Sequence.\n" << endl;
    }
}