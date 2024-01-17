#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string bangla;
    long long int figure = 0, figure1 = 0, i = 1, a;
    while (cin >> figure && figure != EOF)
    {
        a = figure;
        if (i < 10)
            bangla += "   " + to_string(i) + ".";
        else if (i >= 10 && i < 100)
            bangla += "  " + to_string(i) + ".";
        else if (i >= 100 && i < 1000)
            bangla += " " + to_string(i) + ".";
        else
            bangla += to_string(i) + ".";
        if (figure == 0)
        {
            bangla += " 0";
            cout << bangla << endl;
            i++;
            bangla = "";
            continue;
        }
        if (figure == 10000000)
        {
            bangla += " 1 kuti";
            cout << bangla << endl;
            i++;
            bangla = "";
            continue;
        }
        if (figure > 10000000)
        {
            figure1 = figure % 10000000;
            figure /= 10000000;
        }
        if (figure / 10000000 > 0)
        {
            bangla = bangla + ' ' + to_string(figure / 10000000) + " kuti";
            figure %= 10000000;
        }
        if (figure / 100000 > 0)
        {
            bangla = bangla + ' ' + to_string(figure / 100000) + " lakh";
            figure %= 100000;
        }
        if (figure / 1000 > 0)
        {
            bangla = bangla + ' ' + to_string(figure / 1000) + " hajar";
            figure %= 1000;
        }
        if (figure / 100 > 0)
        {
            bangla = bangla + ' ' + to_string(figure / 100) + " shata";
            figure %= 100;
        }
        if (figure < 100 && figure > 0)
        {
            bangla = bangla + ' ' + to_string(figure);
        }

        if (a >= 10000000)
        {
            bangla += " kuti";
            if (figure1 / 100000 > 0)
            {
                bangla = bangla + ' ' + to_string(figure1 / 100000) + " lakh";
                figure1 %= 100000;
            }
            if (figure1 / 1000 > 0)
            {
                bangla = bangla + ' ' + to_string(figure1 / 1000) + " hajar";
                figure1 %= 1000;
            }
            if (figure1 / 100 > 0)
            {
                bangla = bangla + ' ' + to_string(figure1 / 100) + " shata";
                figure1 %= 100;
            }
            if (figure1 > 0)
                bangla = bangla + ' ' + to_string(figure1);
        }

        cout << bangla << endl;
        i++;
        bangla = "";
    }
}
