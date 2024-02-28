#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a = " `1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
    string b = " -=`1234567890]\\qwertyuiop[;'asdfghjkl./zxcvbnm,";
    string c = "";
    char word[1000];
    while (cin.getline(word, 1000))
    {
        c = "";
        for (int i = 0; i < strlen(word); i++)
        {
            for (int j = 0; j < a.size(); j++)
                if (tolower(word[i]) == a[j])
                    c += b[j];
        }
        cout << c << endl;
    }
}