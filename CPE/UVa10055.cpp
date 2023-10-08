// Hashmat_the_brave_warrior
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    long long num1, num2;
    while (scanf("%lld %lld", &num1, &num2) != EOF)
    {
        printf("%lld\n", abs(num1 - num2));
    }

    return 0;
}
