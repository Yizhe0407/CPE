// 身分證檢驗
#include <stdio.h>
int main()
{
    char city, num[10]; /*!身分證字號的數字雖然是整數型態，
                          但因為輸入的時候各數字間沒有空格，整個數列會被視為一個整數，
                          因此需用字元陣列偵測並儲存輸入*/
                        /*因為整數型態所佔的記憶體空間比字元大，可確保資料型態的轉換過程中不會有資料遺失，
                          因此字元型態的變數在遇到需要用整數型態判別或運算的時候，會自動轉為整數。
                          嚴謹的寫法是 : (轉換後的的資料型態)變數名稱... e.g. (int)city... */
    scanf("%c%s", &city, num);
    if (city >= 65 && city <= 72)
        city -= 55;
    else if (city == 'I')
        city -= 39;
    else if (city >= 74 && city <= 78)
        city -= 56;
    else if (city == 'O')
        city -= 44;
    else if (city >= 80 && city <= 86)
        city -= 57;
    else if (city == 'W')
        city -= 55;
    else if (city == 'X' || city == 'Y')
        city -= 58;
    else if (city == 'Z')
        city -= 57;

    int sum = num[8] - 48;
    for (int i = 0; i < 8; i++) /*!身分證字號數字共9碼，除去最後一碼共8碼，i值最大為7*/
        sum += (num[i] - 48) * (8 - i);
    sum += city / 10 + (city % 10) * 9;

    if (sum % 10 == 0)
        printf("real");
    else
        printf("fake");

    return 0;
}