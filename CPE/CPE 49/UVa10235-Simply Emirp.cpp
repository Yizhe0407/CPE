#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n1, n2;
    while (cin >> n1)
    {
        int t1 = 0, t2 = 0;
        for (int i = 1; i <= n1; i++)
            if (n1 % i == 0) t1++;

        string str = to_string(n1);
        reverse(str.begin(), str.end());
        n2 = stoi(str);

        for (int i = 1; i <= n2; i++)
            if (n2 % i == 0) t2++;

        if (n1 == n2 && t1 == 2)
            cout << n1 << " is prime.\n";
        else
        {
            if (t1 > 2) cout << n1 << " is not prime.\n";
            else if (t1 != t2) cout << n1 << " is prime.\n";
            else if (t2 == t1) cout << n1 << " is emirp.\n";
        }
    }
}