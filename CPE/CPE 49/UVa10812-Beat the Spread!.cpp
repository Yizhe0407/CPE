#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, n1, n2;
    cin >> n;
    while (n--)
    {
        cin >> n1 >> n2;
        if (n2 > n1)
            cout << "impossible" << endl;
        else if ((n1 + n2) % 2 || (n1 - n2) % 2)
            cout << "impossible" << endl;
        else
            cout << (n1 + n2) / 2 << " " << (n1 - n2) / 2 << endl;
    }
}