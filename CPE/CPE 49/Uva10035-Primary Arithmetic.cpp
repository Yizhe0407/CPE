#include <iostream>
using namespace std;

int count = 0;
int fun(long long int a, long long int b)
{
    count = 0;
    int carry = 0;
    while (a != 0 || b != 0)
    {
        if ((a % 10 + b % 10 + carry) > 9)
        {
            count += 1;
            carry = 1;
        }
        a /= 10;
        b /= 10;
    }
}

int main()
{
    long long int a, b;
    while (true)
    {
        cin >> a >> b;
        if (a == 0 && b == 0)
            break;
        fun(a, b);

        if (count == 1)
            cout << count << " carry operation." << endl;
        else if (count > 1)
            cout << count << " carry operations." << endl;
        else
            cout << "No carry operation." << endl;
    }
}
