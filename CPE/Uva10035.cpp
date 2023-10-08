// primary_Arithmetic
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
int main()
{
    long n1, n2;
    int carry, count, sum;
    scanf("%ld %ld", &n1, &n2);
    while (n1 || n2)
    {
        carry=count=0;
        while(n1 || n2)
        {
            sum = n1%10 + n2%10 + carry;
            carry = sum > 9;
            count += carry;
            n1 /= 10;
            n2 /= 10;
            
        }
        if (count  == 0)
            printf("No carry operation.\n");
        else if( count == 1)
            printf("1 carry operation.\n");
        else
            printf("%d carry operations.\n", count);
        scanf("%ld %ld", &n1, &n2);
    }
    if (true){

    }
    return 0;
}
