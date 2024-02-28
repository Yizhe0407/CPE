#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        int min, sum, count = 1, t = 9999;
        char check = 't';
        vector<int> v(n);
        vector<int> result;
        result.clear();

        for (auto &element : v)
            cin >> element;
        sort(v.begin(), v.end());

        for (int i = 0; i < v.size() - 1; i++)
            if (v[i] != v[i + 1])
                check = 'f';

        for (int j = 0; j < v.size(); j++)
        {
            sum = 0;
            for (int k = 0; k < v.size(); k++)
                sum += abs(v[j] - v[k]);
            result.push_back(sum);
            if (t > sum)
            {
                t = sum;
                min = v[j];
            }
        }
        sort(result.begin(), result.end());
        for (int i = 0; i < result.size(); i++)
        {
            if (result[i] == result[i + 1])
                count++;
            else
                break;
        }
        if (check == 't')
            count = n;
        cout << min << ' ' << count << ' ';

        result.clear();
        count = 1;
        for (int j = v[0]; j < v[v.size() - 1]; j++)
        {
            sum = 0;
            for (int k = 0; k < v.size(); k++)
                sum += abs(j - v[k]);
            result.push_back(sum);
        }
        sort(result.begin(), result.end());
        for (int i = 0; i < result.size(); i++)
            if (result[i] == result[i + 1])
                count++;
            else
                break;
        cout << count << endl;
    }
}