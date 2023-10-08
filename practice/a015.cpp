// 矩陣的翻轉
#include <stdio.h>
int main()
{
    int test;
    while (scanf("%d", &test) != EOF)
    { /*!根據題意，測資檔會包含多組矩陣資料。
         因此使用EOF寫法判斷程式執行的條件*/
        int row = test, column = 0;
        scanf("%d", &column);
        int matrix[row][column], i = 0, j = 0;
        for (i = 0; i < row; i++) /*讀取輸入的二維陣列*/
            for (j = 0; j < column; j++)
                scanf("%d", &matrix[i][j]);
        for (j = 0; j < column; j++)
        { /*將輸入的二維陣列行列互換後輸出*/
            printf("%d", matrix[0][j]);
            for (i = 1; i < row; i++) /*!輸出矩陣時，同列的元素間會有間隔
                                         也就是說除了第一個元素外，每個元素前都須輸出空格*/
                printf(" %d", matrix[i][j]);
            printf("\n");
        }
    }
    return 0;
}