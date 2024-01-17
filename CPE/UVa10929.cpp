#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string s;
    int a, b;
    while (cin >> s)
    {
        a = 0;
        b = 0;
        if (s == "0")
            break;
        for (int i = 0; i < s.length(); i++)
        {
            if (i % 2 == 0)
                a += s[i] - '0';
            else
                b += s[i] - '0';
        }
        if ((b - a) % 11 == 0)
            cout << s << " is a multiple of 11." << endl;
        else
            cout << s << " is not a multiple of 11." << endl;
    }
}