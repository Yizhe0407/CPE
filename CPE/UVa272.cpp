#include <iostream>
#include <string>
using namespace std;

int main()
{
    string text;
    int n = 0;
    while (getline(cin, text))
    {
        int len = text.size();
        int i = 0;
        while (i < len)
        {
            if (text[i] == '"' && n == 0)
            {
                text.erase(i, 1);
                text.insert(i, "``");
                len--;
                n = 1;
            }
            else if (text[i] == '"' && n == 1)
            {
                text.erase(i, 1);
                text.insert(i, "''");
                len--;
                n = 0;
            }
            else
                i++;
        }
        cout << text << endl;
    }
    return 0;
}
