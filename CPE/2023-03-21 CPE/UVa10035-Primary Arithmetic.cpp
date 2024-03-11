#include <bits/stdc++.h>
using namespace std;

int main()
{
    string f1, f2;
    while(cin >> f1 >> f2)
    {
        if (f1 == "0" && f2 == "0") break;

        int carry = 0, num = 0;
        int i = f1.size() - 1, j = f2.size() - 1;

        while (i >= 0 || j >= 0) {
            int a = (i >= 0) ? f1[i] - '0' : 0;
            int b = (j >= 0) ? f2[j] - '0' : 0;

            if (a + b + carry > 9) {
                num++; carry = 1;
            }else carry = 0;

            i--; j--;
        }

        if (num == 0) cout << "No carry operation.\n";
        else if (num == 1) printf("%d carry operation.\n", num);
        else printf("%d carry operations.\n", num);
    }
}