#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, day, political_num;
    cin >> t;
    while (t--)
    {
        cin >> day;
        cin >> political_num;
        vector<int> lose_day;
        vector<int> parties(political_num);
        for (int i = 0; i < political_num; i++) cin >> parties[i];      

        for (int i = 1, a = 1; i <= day; i++, a++)
        {
            for (int j = 0; j < parties.size(); j++)
                if (a <= 5 && i % parties[j] == 0) lose_day.push_back(i);
            if (a == 7) a = 0;
        }
        lose_day.erase(unique(lose_day.begin(), lose_day.end()), lose_day.end());
        cout << lose_day.size() << endl;
    }
}
