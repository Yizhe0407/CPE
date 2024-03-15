#include <bits/stdc++.h>
using namespace std;

int f1, f2;
int tobin(string s)
{
    int f = 0;
    for (int i = s.size() - 1, j = 0; i >= 0; i--, j++)
        f += pow(2, j) * (s[i] - '0');
    return f;
}

int main()
{
    int n, z, t;
    string s1, s2;
    cin >> n;
    t = 1;
    while (n--)
    {
        cin >> s1;
        cin >> s2;
        f1 = tobin(s1);
        f2 = tobin(s2);
        z = 0;
        while (f2 > 0)
        {
            z = f2;
            f2 = f1 % f2;
            f1 = z;
        }
        if (f1 > 1)
            cout << "Pair #" << t++ << ": All you need is love!" << endl;
        else
            cout << "Pair #" << t++ << ": Love is not all you need!" << endl;
    }
}