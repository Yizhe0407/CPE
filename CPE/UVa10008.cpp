#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int n, max = 0;
    char line[1000], c;
    int count[127] = {0}; // 數組的大小設定為127是為了涵蓋ASCII表的整個範圍，如果將數組設為90，代碼仍然可以正常運行，因為它涉及到的是大寫英文字母的ASCII值範圍，即'A'到'Z' 的ASCII值範圍是65到90。
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++)
    {
        cin.getline(line, 1000);

        for (int j = 0; j < strlen(line); j++)
        {
            c = line[j];
            c = toupper(c);
            if (c >= 'A' && c <= 'Z')
                ++count[c];
        }
    }

    for (c = 'A'; c <= 'Z'; c++)
        if (count[c] > max)
            max = count[c];
    while (max > 0)
    {
        for (c = 'A'; c <= 'Z'; c++)
        {
            if (count[c] == max)
                cout << c << ' ' << max << endl;
        }
        max--;
    }
    return 0;
}
