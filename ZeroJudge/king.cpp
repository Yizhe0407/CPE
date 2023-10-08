#include <bits/stdc++.h>
using namespace std;
int main()
{
    int sum = 0, wheat, i;
    for (i = 0; i < 30; i++)
    {
        wheat = pow(2, i);
        sum += wheat;
    }
    cout << sum << endl;
    system("pause");
    return 0;
}