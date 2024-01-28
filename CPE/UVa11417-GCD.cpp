#include <iostream>
using namespace std;

int GCD(int a, int b)
{
    int temp;
    while (b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main()
{
    int n;
    while (cin >> n && n != 0)
    {
        int g = 0;
        for (int i = 1; i < n; i++)
        {
            for (int j = i + 1; j <= n; j++)
            {
                g += GCD(i, j);
            }
        }
        cout << g << endl;
    }
}