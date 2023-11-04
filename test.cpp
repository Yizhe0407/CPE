#include <iostream>
using namespace std;
int main()
{
    string a;
    int data[256] = {0};
    char j;
    int c;
    cin >> a;
    for (j = 'a'; j <= 'z'; j++)
    {
        for (int i = 0; i < a.length(); i++)
        {
            if (a[i] == j)
                data[j]++;
        }
    }

    for (int i = a.length(); i >= 0; i--)
    {
        for (j = 'a'; j <= 'z'; j++)
        {
            if (i == 0)
                break;
            if (i == data[j])
                cout << j << ":" << data[j] << endl;
        }
    }

    return 0;
}
