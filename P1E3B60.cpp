#include<stdio.h>
#include<stdlib.h>

/*
這次的作業讓我對 C 語言的內容有了更深入的理解，
特別是在畫面輸出與條件判斷的應用上。我發現，設計圖形時
，需要考慮字元排列的整齊性，不能選擇過於複雜的圖案，否則輸出時會顯得雜亂。
除此之外，我還複習了 scanf 與 printf 的使用，以及 if-else 判斷結構的應用。
雖然一開始遇到了一些錯誤，但當我成功跑出想要的畫面時，感到非常有成就感，
這次作業對我來說是一個寶貴的學習經驗。
*/

int main(void)
{
	int a; //宣告變數a
	char c; //宣告字元b

	printf("\t    ||    \n");
    printf("\t    ||    \n");
    printf("\t  ______  \n");
    printf("\t |#######| \n");
    printf("\t |#######| \n");
    printf("\t |#######| \n");
    printf("\t |#######| \n");
    printf("\t |#######| \n");
    printf("\t |#######| \n");
    printf("\t |#######| \n");
    printf("\t |#######| \n");
    printf("\t |#######| \n");
    printf("\t |#######| \n");
    printf("\t |#######| \n");
    printf("\t |#######| \n");
    printf("\t |#######| \n");
    printf("\t |#######| \n");
    printf("\t |#######| \n");//這是畫一杯紅茶
    printf("\t |#######| \n");
    printf("\t  \_____/  \n");

    system("pause"); //暫停螢幕畫面
    system("CLS"); //清除螢幕

        printf("輸入密碼\n");
        scanf("%d",&a); //輸入密碼
    if(a==2024) //密碼正確 a=2024
    {
        printf("歡迎\n");
    }
    else if(a!=2024) //密碼錯誤 a!=2024
    {
        printf("警告!輸入錯誤\n");
        return 0;
    }


    system("pause");
    system("CLS");
	printf("----------------------------\n"); //列印主選單
	printf("| 'A'...'Z' : Uppercase    |\n");
	printf("| 'a'...'z' : Lowercase    |\n");
	printf("| '0'...'9' : Digit        |\n");
	printf("| Otherwise : E3B60劉開弘  |\n");
	printf("----------------------------\n");
	printf("輸入一個字元\n"); //提示輸入字元
	scanf("%s",&c); //輸入字元

    if('A'<=c && c<='Z') //若c為大寫字母
    {
        printf("Uppercase\n");
    }
    else if('a'<=c && c<='z') //若c為小寫字母
    {
        printf("Lowercase\n");
    }
    else if('0'<=c && c<='9') //若c為數字
    {
        printf("Digit\n");
    }
    else //若c為其他字元
    {
        printf("E3B 60 劉開弘 \n");
    }
    system("pause");

    return 0;

    }

