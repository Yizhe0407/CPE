#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row = 0, maxlength = 0;
    char sentence[101][101];
    char newsentence[101][101];

    while (gets(sentence[row]))
    {
        if (strlen(sentence[row]) > maxlength)
            maxlength = strlen(sentence[row]);
        row++;
    }

    for (int i = 0; i < maxlength; i++)
    {
        for (int j = maxlength; j >= 0; j--)
        {
            if (sentence[i][j] == NULL)
                newsentence[i][maxlength - j] = ' ';
            else
                newsentence[i][maxlength - j] = sentence[i][j];
        }
    }

    for (int i = 0; i < maxlength; i++)
    {
        for (int j = 0; j < maxlength; j++)
        {
            cout << newsentence[i][j];
        }
        cout << '\n';
    }
}
