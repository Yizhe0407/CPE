#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int a, b;
    while (cin >> a >> b)
    {
        if (a == 0 && b == 0) break;
            
        int carry = 0, count = 0;
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

        if (count == 1)
            cout << count << " carry operation." << endl;
        else if (count > 1)
            cout << count << " carry operations." << endl;
        else
            cout << "No carry operation." << endl;
    }
}