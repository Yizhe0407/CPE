#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    char c;
    cin >> t;
    cin.ignore();
    vector<vector<long long>> dict(101, vector<long long>(101));
    for (int a = 0; a < t; a++)
    {
        bool ans = true;
        cin >> c >> c >> n;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> dict[i][j];
                if (dict[i][j] < 0)
                    ans = false;
            }
        }

        int tmp = n - 1;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (dict[i][j] != dict[tmp - i][tmp - j])
                    ans = false;
            }
        }
        cout << "Test #" << a + 1 << ": ";
        if(ans)
        	cout << "Symmetric.\n";
        else 
        	cout << "Non-symmetric.\n";
    }
}