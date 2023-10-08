// 解碼器
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k = -7;
    string pw;
    getline(cin, pw);
    for (int i = 0; i < pw.length(); i++)
    {
        cout << static_cast<char>(pw[i] + k);
    }
    return 0;
}

/*
static_cast 是 C++ 中的一個轉換運算符（casting operator），
用來進行顯式的型別轉換。它可以將一個值轉換為另外一種型別，
並且在編譯時檢查轉換的安全性。

其中，目標型別是要轉換成的型別，表達式是要轉換的值。

在上面的程式碼中，static_cast 用來將整數轉換為字元型別。
因為 C++ 中的 char 型別實際上就是一個整數型別，表示 ASCII 編碼值，
所以需要使用 static_cast<char> 來將整數轉換為對應的 ASCII 字元。

在這個例子中，如果直接使用 (char) 進行轉換，可能會出現隱式轉換的問題，
而使用 static_cast 可以在編譯時檢查轉換的安全性，避免潛在的問題。
*/