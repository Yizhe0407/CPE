#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    string n;
    while (cin >> n && n != "0")
    {
        if(n.size() == 1)
        {
            cout << n << endl;
            continue;
        }
        while (n.size() > 1)
        {
            num = 0;
            for (int i = 0; i < n.size(); i++)
                num += n[i] - '0';
            n = to_string(num);
        }
        cout << num << endl;
    }
}