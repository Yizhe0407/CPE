#include <bits/stdc++.h>
using namespace std;

int main()
{
    int j, r, n;
    while (cin >> j >> r && j != 0 && r != 0)
    {
        vector<int> v(j + 1);
        for (int i = 0; i < r; i++)
        {
            for (int k = 1; k <= j; k++)
            {
                cin >> n;
                v[k] += n;
            }
        }
        int tmp = 0, index = 1;
        for (int i = 1; i < v.size(); i++)
        {
            if (v[i] >= tmp)
            {
                tmp = v[i];
                index = i;
            }
        }
        cout << index << endl;
    }
}