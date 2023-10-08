// 迴文
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s, count;
    string r;

    getline(cin, r);
    s = r.length();

    for (int i = 0; i <= r.length(); i++)
    {
        if (int(r[i]) == int(r[s - i - 1])) 
            count += 1;
    }
    if (count == s + 1)
        cout << "yes" << endl;
    else
        cout << "no" << endl;
    return 0;
}
