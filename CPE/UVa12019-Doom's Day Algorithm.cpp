#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, month, days, a;
    int dict[] = {0, 3, 7, 7, 4, 2, 6, 4, 1, 5, 3, 7, 5};
    string day[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    cin >> n;
    while (n--)
    {
        cin >> month >> days;
        if (dict[month] == days)
            cout << "Monday" << endl;
        else if (dict[month] < days)
        {
            a = days - dict[month];
            while (a >= 7)
                a -= 7;
            cout << day[a] << endl;
        }
        else
        {
            a = 7 - (dict[month] - days);
            cout << day[a] << endl;
        }
    }
}