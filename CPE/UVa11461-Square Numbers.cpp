#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // int a, b;
    // while(cin >> a >> b && !(a==0 && b==0))
    // {
    // 	int c=sqrt(a),d=sqrt(b);
    // 	if(c*c != a) c++;
    // 	cout << d-c+1 << endl;
    // }
    // return 0;
    int r1, r2, square[350] = {0}, sum;
    for (int i = 1; i < 351; i++)
        square[i] = i * i;
    while (cin >> r1 >> r2)
    {
        if (r1 == 0 && r2 == 0)
            break;
        sum = 0;
        for (int j = r1; j <= r2; j++)
        {
            for (int k = 1; k < 351; k++)
            {
                if (square[k] == j)
                    sum++;
            }
        }
        cout << sum << endl;
    }
}
