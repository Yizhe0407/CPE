// Ant on a Chessborad
#include <algorithm>
#include <iostream>
using namespace std;
int main()
{
    int N;
    while (cin >> N)
    {
        int M = 1;
        while (M * M < N)
            M++;
        int X = min(M, N - (M - 1) * (M - 1));
        int Y = min(M, M * M - N + 1);
        if (M % 2)
            swap(X, Y);
        cout << X << " " << M << endl;
    }
    return 0;
}