#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t, N, half;
    bool symmetric;
    vector<vector<long long>> matrix(101, vector<long long>(101));
    scanf("%d", &t);

    for (int i = 1; i <= t; i++)
    {
        symmetric = true;
        scanf("\nN = %d", &N);

        for (int j = 0; j < N; j++)
        {
            for (int k = 0; k < N; k++)
            {
                scanf("%lld", &matrix[j][k]);
                if (matrix[j][k] < 0)
                    symmetric = false;
            }
        }

        half = N / 2 + 1;
        for (int j = 0; j < half; j++)
        {
            if (!symmetric)
                break;
            for (int k = 0; k < N; k++)
            {
                if (matrix[j][k] != matrix[N - j - 1][N - k - 1])
                {
                    symmetric = false;
                    break;
                }
            }
        }

        if (symmetric)
            printf("Test #%d: Symmetric.\n", i);
        else
            printf("Test #%d: Non-symmetric.\n", i);
    }

    return 0;
}
