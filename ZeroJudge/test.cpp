// 將鍵盤輸入直接印在螢幕上
/*#include <bits/stdc++.h>
#include <conio.h>
using namespace std;
int main()
{
    char ch;

    ch = getche();
    while (ch != '\r')
    {
        putchar(ch);
        printf("\n");
        ch = getche();
    }
    system("pause");
    return 0;
}*/

#include<iostream>
using namespace std;

int main()
{
    string s;
    char c;

    while(true)
    {
        c = cin.peek();

        if( '0' <= c and c <= '9' )
            cout << "即將要輸入數字開頭的東西" << endl;
        if( 'a' <= c and c <= 'z' )
            cout << "即將要輸入小寫字母開頭的東西" << endl;

        cin >> s;
        cin.get(); //先讀掉 換行字元'\n'   避免下次偷看到
        cout << "輸入了:" << s << endl;
    }

    return 0;
}