// You can say 11

#include <stdio.h>

int main()
{
    char d[1000]; // 使用字符数组

    printf("Enter a character: ");
    scanf(" %c", &d[0]); // 请注意使用 %c 来读取字符，并且加一个空格来跳过可能的空白字符

    printf("The character you entered is: %c\n", d[0]);

    return 0;
}

// #include <stdio.h>

// int main()
// {
//     long long figure;
//     while (scanf("%lld", &figure))
//     {
//         if (figure == 0)
//         {
//             break;
//         }
//         if (figure % 11 == 0)
//         {
//             printf("%lld is a multiple of 11.\n", figure);
//         }
//         else
//         {
//             printf("%lld is not a multiple of 11.\n", figure);
//         }
//     }
// }