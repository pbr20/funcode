#include <stdio.h>
#include <windows.h>

void gotoxy(int x, int y)
{
    printf("%c[%d;%df", 0x1B, y, x);
}

void raindrops1(int count1, int count2, int count3)
{
    int t7 = 30;

    for (int i = 26; i <= 35; i++)
    {
        gotoxy(83, i);
        printf("*");
        fflush(stdout);
        gotoxy(83, (i + 1));
        printf("*");
        fflush(stdout);

        gotoxy(87, i);
        printf("*");
        fflush(stdout);
        gotoxy(87, (i + 1));
        printf("*");
        fflush(stdout);

        gotoxy(91, i);
        printf("*");
        fflush(stdout);
        gotoxy(91, (i + 1));
        printf("*");
        fflush(stdout);

        gotoxy(95, i);
        printf("*");
        fflush(stdout);
        gotoxy(95, (i + 1));
        printf("*");
        fflush(stdout);

        gotoxy(99, i);
        printf("*");
        fflush(stdout);
        gotoxy(99, (i + 1));
        printf("*");
        fflush(stdout);

        gotoxy(103, i);
        printf("*");
        fflush(stdout);
        gotoxy(103, (i + 1));
        printf("*");
        fflush(stdout);

        gotoxy(107, i);
        printf("*");
        fflush(stdout);
        gotoxy(107, (i + 1));
        printf("*");
        fflush(stdout);

        gotoxy(111, i);
        printf("*");
        fflush(stdout);
        gotoxy(111, (i + 1));
        printf("*");
        fflush(stdout);

        gotoxy(115, i);
        printf("*");
        fflush(stdout);
        gotoxy(115, (i + 1));
        printf("*");
        fflush(stdout);

        gotoxy(119, i);
        printf("*");
        fflush(stdout);
        gotoxy(119, (i + 1));
        printf("*");
        fflush(stdout);

        Sleep(t7);

        gotoxy(83, i);
        printf(" ");
        fflush(stdout);
        gotoxy(83, (i + 1));
        printf(" ");
        fflush(stdout);

        gotoxy(87, i);
        printf(" ");
        fflush(stdout);
        gotoxy(87, (i + 1));
        printf(" ");
        fflush(stdout);

        gotoxy(91, i);
        printf(" ");
        fflush(stdout);
        gotoxy(91, (i + 1));
        printf(" ");
        fflush(stdout);

        gotoxy(95, i);
        printf(" ");
        fflush(stdout);
        gotoxy(95, (i + 1));
        printf(" ");
        fflush(stdout);

        gotoxy(99, i);
        printf(" ");
        fflush(stdout);
        gotoxy(99, (i + 1));
        printf(" ");
        fflush(stdout);

        gotoxy(103, i);
        printf(" ");
        fflush(stdout);
        gotoxy(103, (i + 1));
        printf(" ");
        fflush(stdout);

        gotoxy(107, i);
        printf(" ");
        fflush(stdout);
        gotoxy(107, (i + 1));
        printf(" ");
        fflush(stdout);

        gotoxy(111, i);
        printf(" ");
        fflush(stdout);
        gotoxy(111, (i + 1));
        printf(" ");
        fflush(stdout);

        gotoxy(115, i);
        printf(" ");
        fflush(stdout);
        gotoxy(115, (i + 1));
        printf(" ");
        fflush(stdout);

        gotoxy(119, i);
        printf(" ");
        fflush(stdout);
        gotoxy(119, (i + 1));
        printf(" ");
        fflush(stdout);
    }

    for (int i = 26; i <= 35; i++)
    {
        gotoxy(85, i);
        printf("*");
        fflush(stdout);
        gotoxy(85, (i + 1));
        printf("*");
        fflush(stdout);

        gotoxy(89, i);
        printf("*");
        fflush(stdout);
        gotoxy(89, (i + 1));
        printf("*");
        fflush(stdout);

        gotoxy(93, i);
        printf("*");
        fflush(stdout);
        gotoxy(93, (i + 1));
        printf("*");
        fflush(stdout);

        gotoxy(97, i);
        printf("*");
        fflush(stdout);
        gotoxy(97, (i + 1));
        printf("*");
        fflush(stdout);

        gotoxy(101, i);
        printf("*");
        fflush(stdout);
        gotoxy(101, (i + 1));
        printf("*");
        fflush(stdout);

        gotoxy(105, i);
        printf("*");
        fflush(stdout);
        gotoxy(105, (i + 1));
        printf("*");
        fflush(stdout);

        gotoxy(109, i);
        printf("*");
        fflush(stdout);
        gotoxy(109, (i + 1));
        printf("*");
        fflush(stdout);

        gotoxy(113, i);
        printf("*");
        fflush(stdout);
        gotoxy(113, (i + 1));
        printf("*");
        fflush(stdout);

        gotoxy(117, i);
        printf("*");
        fflush(stdout);
        gotoxy(117, (i + 1));
        printf("*");
        fflush(stdout);

        Sleep(t7);

        gotoxy(85, i);
        printf(" ");
        fflush(stdout);
        gotoxy(85, (i + 1));
        printf(" ");
        fflush(stdout);

        gotoxy(89, i);
        printf(" ");
        fflush(stdout);
        gotoxy(89, (i + 1));
        printf(" ");
        fflush(stdout);

        gotoxy(93, i);
        printf(" ");
        fflush(stdout);
        gotoxy(93, (i + 1));
        printf(" ");
        fflush(stdout);

        gotoxy(97, i);
        printf(" ");
        fflush(stdout);
        gotoxy(97, (i + 1));
        printf(" ");
        fflush(stdout);

        gotoxy(101, i);
        printf(" ");
        fflush(stdout);
        gotoxy(101, (i + 1));
        printf(" ");
        fflush(stdout);

        gotoxy(105, i);
        printf(" ");
        fflush(stdout);
        gotoxy(105, (i + 1));
        printf(" ");
        fflush(stdout);

        gotoxy(109, i);
        printf(" ");
        fflush(stdout);
        gotoxy(109, (i + 1));
        printf(" ");
        fflush(stdout);

        gotoxy(113, i);
        printf(" ");
        fflush(stdout);
        gotoxy(113, (i + 1));
        printf(" ");
        fflush(stdout);

        gotoxy(117, i);
        printf(" ");
        fflush(stdout);
        gotoxy(117, (i + 1));
        printf(" ");
        fflush(stdout);
    }

    int t9 = 30;

    if (count1 <= 5)
    {
        for (int i = 5, j = 1; i >= 1; i--, j++)
        {
            gotoxy((i + 65 + count3), 37);
            printf("*");
            gotoxy((j + 99 + count2), 37);
            printf("*");
            Sleep(t9);
        }
    }

    else if (count1 >= 6 && count1 <= 8)
    {
        for (int i = 1; i <= 5; i++)
        {
            gotoxy(70, (i + 36 + count2));
            printf("*");
            gotoxy(129, (i + 36 + count2));
            printf("*");
            Sleep(t9);
        }
    }

    else if (count1 >= 9 && count1 <= 14)
    {
        for (int i = 1, j = 5; i <= 5; i++, j--)
        {
            gotoxy((i + 69 + count2), 51);
            printf("*");
            gotoxy((j + 94 + count3), 51);
            printf("*");
            Sleep(t9);
        }
    }
}

int main()
{

    int time1 = 100;
    int l1 = 714;

    system("cls");

    // Heavenly

    for (int i = 6, j = 37, k = 37, l = 48, m = 60; i <= 12; i++, j--, k++, l++, m--)
    {
        gotoxy(5, i); // h-l
        printf("*");
        gotoxy(13, i); // h-r
        printf("*");
        gotoxy(18, i); // E1
        printf("*");
        gotoxy(j, i); // a-l
        printf("*");
        gotoxy(k, i); // a-r
        printf("*");
        gotoxy(l, i); // v-l
        printf("*");
        gotoxy(m, i); // v-r
        printf("*");
        gotoxy(65, i); // E2
        printf("*");
        gotoxy(77, i); // n-l
        printf("*");
        gotoxy(83, i); // n-r
        printf("*");
        gotoxy((k + 40), i); // n-r
        printf("*");
        gotoxy(88, i); // L
        printf("*");

        Sleep(time1);
    }

    for (int i = 6; i <= 12; i++)
    {
        gotoxy(i, 9); // h
        printf("*");
        gotoxy((i + 13), 6); // E1-top
        printf("*");
        gotoxy((i + 13), 12); // E1-bottom
        printf("*");
        gotoxy((i + 60), 6); // E2-top
        printf("*");
        gotoxy((i + 60), 12); // E2-bottom
        printf("*");
        gotoxy((i + 83), 12); // L-bottom
        printf("*");

        Sleep(time1);
    }

    for (int i = 1, j = 5, k = 1; i <= 5; i++, j--, k++)
    {
        gotoxy((i + 18), 9); // E1-Middle
        printf("*");
        gotoxy((i + 34), 9); // A-Middle
        printf("*");
        gotoxy((i + 65), 9); // E2-Middle
        printf("*");
        gotoxy((i + 99), (k + 5)); // Y-l
        printf("*");
        gotoxy((j + 103), (k + 5)); // Y-r
        printf("*");

        Sleep(time1);
    }

    // Heart

    for (int i = 1; i <= 3; i++)
    {
        gotoxy(104, (i + 9));
        printf("*");
        Sleep(time1);
    }

    int time = 200;

    gotoxy(148, 6);
    printf("*");
    Sleep(time);

    for (int i = 147, j = 149; i >= 147, j <= 149; i--, j++)
    {
        gotoxy(i, 5);
        printf("*");
        gotoxy(j, 5);
        printf("*");
        Sleep(time);
    }

    for (int i = 146, j = 150; i >= 138, j <= 158; i--, j++)
    {
        gotoxy(i, 4);
        printf("*");
        gotoxy(j, 4);
        printf("*");
        Sleep(time);
    }

    for (int i = 137, j = 5, k = 159, l = 5; l <= 6; i--, j++, k++, l++)
    {
        gotoxy(i, j);
        printf("*");
        gotoxy(k, l);
        printf("*");
        Sleep(time);
    }

    for (int i = 7, j = 7; i <= 8; i++, j++)
    {
        gotoxy(135, i);
        printf("*");
        gotoxy(161, j);
        printf("*");
        Sleep(time);
    }

    for (int i = 9, j = 9; i <= 10; i++, j++)
    {
        gotoxy(136, i);
        printf("*");
        gotoxy(160, j);
        printf("*");
        Sleep(time);
    }

    for (int i = 137, j = 11, k = 159, l = 11; l <= 16; i += 2, j++, k -= 2, l++)
    {
        gotoxy(i, j);
        printf("*");
        gotoxy(k, l);
        printf("*");
        Sleep(time);
    }

    gotoxy(148, 17);
    printf("*");
    Sleep(time);

    int t2 = 50;

    // Lyrics border-1 & 2

    for (int i = 3, j = 146; i <= 49; i++, j++)
    {
        gotoxy(i, 18);
        printf("+");

        gotoxy(j, 19);
        printf("+");
        Sleep(t2);
    }

    for (int i = 18, j = 19; i <= 46; i++, j++)
    {
        gotoxy(49, i);
        printf("+");

        gotoxy(192, j);
        printf("+");
        Sleep(t2);
    }

    for (int i = 49, j = 192; i >= 3; i--, j--)
    {
        gotoxy(i, 46);
        printf("+");

        gotoxy(j, 47);
        printf("+");
        Sleep(t2);
    }

    for (int i = 46, j = 47; i >= 18; i--, j--)
    {
        gotoxy(3, i);
        printf("+");

        gotoxy(146, j);
        printf("+");
        Sleep(t2);
    }

    Sleep(1500);
    gotoxy(5, 20);
    // 1st verse
    for (int i = 1; i <= 7; i++)
    { // l1
        if (i == 1)
        {
            printf("Wanting ");
            Sleep(l1);
        }
        else if (i == 2)
        {
            printf("your ");
            Sleep(l1);
        }
        else if (i == 3)
        {
            printf("love ");
            Sleep(l1);
        }
        else if (i == 4)
        {
            printf("to ");
            Sleep(l1);
        }
        else if (i == 5)
        {
            printf("come ");
            Sleep(l1);
        }
        else if (i == 6)
        {
            printf("into ");
            Sleep(l1);
        }
        else
        {
            printf("me");
            Sleep(l1);
        }
    }
    int l2 = 667;
    gotoxy(5, 22);

    for (int i = 1; i <= 6; i++)
    { // l2
        if (i == 1)
        {
            printf("Feeling ");
            Sleep(l2);
        }
        else if (i == 2)
        {
            printf("it ");
            Sleep(l2);
        }
        else if (i == 3)
        {
            printf("slow, ");
            Sleep(l2);
        }
        else if (i == 4)
        {
            printf("over ");
            Sleep(l2);
        }
        else if (i == 5)
        {
            printf("this ");
            Sleep(l2);
        }
        else if (i == 6)
        {
            printf("dream");
            Sleep(l2);
        }
    }

    int l3 = 800;
    gotoxy(5, 24);
    Sleep(1000);

    for (int i = 1; i <= 10; i++)
    { // l3
        if (i == 1)
        {
            printf("Touch ");
            Sleep(l3);
        }
        else if (i == 2)
        {
            printf("me ");
            Sleep(l3);
        }
        else if (i == 3)
        {
            printf("with ");
            Sleep(l3);
        }
        else if (i == 4)
        {
            printf("a ");
            Sleep(l3);
        }
        else if (i == 5)
        {
            printf("kiss, ");
            Sleep(l3);
        }
        if (i == 6)
        {
            printf("touch ");
            Sleep(l3);
        }
        else if (i == 7)
        {
            printf("me ");
            Sleep(l3);
        }
        else if (i == 8)
        {
            printf("with ");
            Sleep(l3);
        }
        else if (i == 9)
        {
            printf("a ");
            Sleep(l3);
        }
        else if (i == 10)
        {
            printf("kiss");
            Sleep(l3);
        }
    }

    gotoxy(5, 26);
    Sleep(1000);

    for (int i = 1; i <= 6; i++)
    { // l4=l2
        if (i == 1)
        {
            printf("Now ");
            Sleep(l2);
        }
        else if (i == 2)
        {
            printf("you're ");
            Sleep(l2);
        }
        else if (i == 3)
        {
            printf("above ");
            Sleep(l2);
        }
        else if (i == 4)
        {
            printf("feeling ");
            Sleep(l2);
        }
        else if (i == 5)
        {
            printf("it ");
            Sleep(l2);
        }
        else if (i == 6)
        {
            printf("still");
            Sleep(l2);
        }
    }

    int l5 = 625;
    gotoxy(5, 28);

    for (int i = 1; i <= 8; i++)
    { // l5
        if (i == 1)
        {
            printf("Tell ");
            Sleep(l5);
        }
        else if (i == 2)
        {
            printf("me ");
            Sleep(l5);
        }
        else if (i == 3)
        {
            printf("it's ");
            Sleep(l5);
        }
        else if (i == 4)
        {
            printf("love, ");
            Sleep(l5);
        }
        else if (i == 5)
        {
            printf("tell ");
            Sleep(l5);
        }
        else if (i == 6)
        {
            printf("me ");
            Sleep(l5);
        }
        else if (i == 7)
        {
            printf("it's ");
            Sleep(l5);
        }
        else if (i == 8)
        {
            printf("real");
            Sleep(l5);
        }
    }

    gotoxy(5, 30);

    for (int i = 1; i <= 10; i++)
    { // l6 = l3
        if (i == 1)
        {
            printf("Touch ");
            Sleep(l3);
        }
        else if (i == 2)
        {
            printf("me ");
            Sleep(l3);
        }
        else if (i == 3)
        {
            printf("with ");
            Sleep(l3);
        }
        else if (i == 4)
        {
            printf("a ");
            Sleep(l3);
        }
        else if (i == 5)
        {
            printf("kiss, ");
            Sleep(l3);
        }
        if (i == 6)
        {
            printf("feel ");
            Sleep(l3);
            Sleep(500);
        }
        else if (i == 7)
        {
            printf("me ");
            Sleep(l3);
        }
        else if (i == 8)
        {
            printf("on ");
            Sleep(l3);
        }
        else if (i == 9)
        {
            printf("your ");
            Sleep(l3);
        }
        else if (i == 10)
        {
            printf("lips");
            Sleep(l3);
        }
    }

    int l71 = 800;
    int l72 = 500;
    gotoxy(5, 32);

    for (int i = 1; i <= 8; i++)
    { // l7
        if (i == 1)
        {
            printf("Because ");
            Sleep(l71);
        }
        else if (i == 2)
        {
            printf("this ");
            Sleep(l71);
        }
        else if (i == 3)
        {
            printf("is ");
            Sleep(l71);
        }
        else if (i == 4)
        {
            printf("where ");
            Sleep(l71);
            Sleep(500);
        }
        else if (i == 5)
        {
            printf("I ");
            Sleep(l71);
        }
        else if (i == 6)
        {
            printf("want ");
            Sleep(2500);
        }
        else if (i == 7)
        {
            printf("to ");
            Sleep(l72);
        }
        else if (i == 8)
        {
            printf("be");
            Sleep(l72);
        }
    }

    gotoxy(5, 34);
    Sleep(2000);

    for (int i = 1; i <= 6; i++)
    { // l8
        if (i == 1)
        {
            printf("Where ");
            Sleep(600);
        }
        else if (i == 2)
        {
            printf("it's ");
            Sleep(1400);
        }
        else if (i == 3)
        {
            printf("so ");
            Sleep(500);
        }
        else if (i == 4)
        {
            printf("sweet ");
            Sleep(1500);
        }
        else if (i == 5)
        {
            printf("and ");
            Sleep(800);
        }
        else if (i == 6)
        {
            printf("heavenly");
            Sleep(3200);
        }
    }

    gotoxy(5, 36);
    int l9 = 556;

    for (int i = 1; i <= 9; i++)
    { // l9
        if (i == 1)
        {
            printf("I'm ");
            Sleep(l9);
        }
        else if (i == 2)
        {
            printf("giving ");
            Sleep(l9);
        }
        else if (i == 3)
        {
            printf("you ");
            Sleep(l9);
        }
        else if (i == 4)
        {
            printf("all ");
            Sleep(l9);
        }
        else if (i == 5)
        {
            printf("my, ");
            Sleep(l9);
        }
        if (i == 6)
        {
            printf("giving ");
            Sleep(l9);
        }
        else if (i == 7)
        {
            printf("you ");
            Sleep(l9);
        }
        else if (i == 8)
        {
            printf("all ");
            Sleep(l9);
        }
        else if (i == 9)
        {
            printf("my");
            Sleep(l9);
        }
    }

    gotoxy(5, 38);
    int l10 = 400;

    for (int i = 1; i <= 5; i++)
    { // l10
        if (i == 1)
        {
            printf("Giving ");
            Sleep(l10);
        }
        else if (i == 2)
        {
            printf("you ");
            Sleep(l10);
        }
        else if (i == 3)
        {
            printf("all ");
            Sleep(l10);
        }
        else if (i == 4)
        {
            printf("my ");
            Sleep(l10);
            Sleep(500);
        }
        else if (i == 5)
        {
            printf("love");
            Sleep(l10);
            Sleep(2500);
        }
    }

    gotoxy(5, 40);
    l9 = 570;

    for (int i = 2; i <= 9; i++)
    { // l11

        if (i == 2)
        {
            printf("Giving ");
            Sleep(l9);
        }
        else if (i == 3)
        {
            printf("you ");
            Sleep(l9);
        }
        else if (i == 4)
        {
            printf("all ");
            Sleep(l9);
        }
        else if (i == 5)
        {
            printf("my, ");
            Sleep(l9);
        }
        if (i == 6)
        {
            printf("giving ");
            Sleep(l9);
        }
        else if (i == 7)
        {
            printf("you ");
            Sleep(l9);
        }
        else if (i == 8)
        {
            printf("all ");
            Sleep(l9);
        }
        else if (i == 9)
        {
            printf("my");
            Sleep(l9);
        }
    }

    gotoxy(5, 42);
    l10 = 400;

    for (int i = 1; i <= 5; i++)
    { // l12
        if (i == 1)
        {
            printf("Giving ");
            Sleep(l10);
        }
        else if (i == 2)
        {
            printf("you ");
            Sleep(l10);
        }
        else if (i == 3)
        {
            printf("all ");
            Sleep(l10);
        }
        else if (i == 4)
        {
            printf("my ");
            Sleep(l10);
            Sleep(500);
        }
        else if (i == 5)
        {
            printf("love");
            Sleep(l10);
            Sleep(500);
        }
    }

    gotoxy(5, 44);
    int l13 = 333;

    for (int i = 1; i <= 3; i++)
    { // l13
        if (i == 1)
        {
            printf("All ");
            Sleep(l13);
        }
        else if (i == 2)
        {
            printf("my ");
            Sleep(l13);
        }
        else if (i == 3)
        {
            printf("love");
            Sleep(l13);
        }
    }
    // Cloud
    int t3 = 200;

    for (int i = 2; i >= 1; i--)
    {
        gotoxy(82, (i + 22));
        printf("*");
        Sleep(t3);
    }

    gotoxy(83, 22);
    printf("*");
    Sleep(t3);

    for (int i = 1; i <= 6; i++)
    {
        gotoxy((i + 83), 21);
        printf("*");
        Sleep(t3);
    }

    gotoxy(90, 22);
    printf("*");
    Sleep(t3);

    for (int i = 2; i >= 1; i--)
    {
        gotoxy(91, (i + 19));
        printf("*");
        Sleep(t3);
    }

    for (int i = 2; i >= 1; i--)
    {
        gotoxy(92, (i + 17));
        printf("*");
        Sleep(t3);
    }

    for (int i = 1; i <= 4; i++)
    {
        gotoxy((i + 92), 17);
        printf("*");
        Sleep(t3);
    }

    for (int i = 1; i <= 8; i++)
    {
        gotoxy((i + 96), 16);
        printf("*");
        Sleep(t3);
    }

    for (int i = 1; i <= 4; i++)
    {
        gotoxy((i + 104), 17);
        printf("*");
        Sleep(t3);
    }

    for (int i = 1; i <= 2; i++)
    {
        gotoxy(109, (i + 17));
        printf("*");
        Sleep(t3);
    }

    gotoxy(110, 20);
    printf("*");
    Sleep(t3);

    gotoxy(111, 21);
    printf("*");
    Sleep(t3);

    gotoxy(112, 20);
    printf("*");
    Sleep(t3);

    for (int i = 1; i <= 6; i++)
    {
        gotoxy((i + 112), 19);
        printf("*");
        Sleep(t3);
    }

    gotoxy(119, 20);
    printf("*");
    Sleep(t3);

    gotoxy(120, 21);
    printf("*");
    Sleep(t3);

    for (int i = 1; i <= 3; i++)
    {
        gotoxy(121, (i + 21));
        printf("*");
        Sleep(t3);
    }

    for (int i = 120; i >= 83; i--)
    {
        gotoxy(i, 25);
        printf("*");
        Sleep(t3);
    }

    gotoxy(148, 21);
    // 2nd verse
    for (int i = 1; i <= 7; i++)
    { // l1
        if (i == 1)
        {
            printf("Needing ");
            Sleep(l1);
        }
        else if (i == 2)
        {
            printf("you ");
            Sleep(l1);
        }
        else if (i == 3)
        {
            printf("now ");
            Sleep(l1);
        }
        else if (i == 4)
        {
            printf("to ");
            Sleep(l1);
        }
        else if (i == 5)
        {
            printf("come ");
            Sleep(l1);
        }
        else if (i == 6)
        {
            printf("into ");
            Sleep(l1);
        }
        else
        {
            printf("me");
            Sleep(l1);
        }
    }
    l2 = 667;
    gotoxy(148, 23);

    for (int i = 1; i <= 6; i++)
    { // l2
        if (i == 1)
        {
            printf("Feeling ");
            Sleep(l2);
        }
        else if (i == 2)
        {
            printf("it ");
            Sleep(l2);
        }
        else if (i == 3)
        {
            printf("slow, ");
            Sleep(l2);
        }
        else if (i == 4)
        {
            printf("over ");
            Sleep(l2);
        }
        else if (i == 5)
        {
            printf("this ");
            Sleep(l2);
        }
        else if (i == 6)
        {
            printf("dream");
            Sleep(l2);
        }
    }

    l3 = 800;
    gotoxy(148, 25);
    Sleep(1000);

    for (int i = 1; i <= 10; i++)
    { // l3
        if (i == 1)
        {
            printf("Touch ");
            Sleep(l3);
        }
        else if (i == 2)
        {
            printf("me ");
            Sleep(l3);
        }
        else if (i == 3)
        {
            printf("with ");
            Sleep(l3);
        }
        else if (i == 4)
        {
            printf("a ");
            Sleep(l3);
        }
        else if (i == 5)
        {
            printf("kiss, ");
            Sleep(l3);
        }
        if (i == 6)
        {
            printf("feel ");
            Sleep(l3);
        }
        else if (i == 7)
        {
            printf("me ");
            Sleep(l3);
        }
        else if (i == 8)
        {
            printf("on ");
            Sleep(l3);
        }
        else if (i == 9)
        {
            printf("your ");
            Sleep(l3);
        }
        else if (i == 10)
        {
            printf("lips");
            Sleep(l3);
        }
    }

    gotoxy(148, 27);
    Sleep(1000);

    for (int i = 1; i <= 6; i++)
    { // l4=l2
        if (i == 1)
        {
            printf("When ");
            Sleep(l2);
        }
        else if (i == 2)
        {
            printf("you're ");
            Sleep(l2);
        }
        else if (i == 3)
        {
            printf("above ");
            Sleep(l2);
        }
        else if (i == 4)
        {
            printf("feeling ");
            Sleep(l2);
        }
        else if (i == 5)
        {
            printf("it ");
            Sleep(l2);
        }
        else if (i == 6)
        {
            printf("still");
            Sleep(l2);
        }
    }

    l5 = 625;
    gotoxy(148, 29);

    for (int i = 1; i <= 8; i++)
    { // l5
        if (i == 1)
        {
            printf("Tell ");
            Sleep(l5);
        }
        else if (i == 2)
        {
            printf("me ");
            Sleep(l5);
        }
        else if (i == 3)
        {
            printf("it's ");
            Sleep(l5);
        }
        else if (i == 4)
        {
            printf("love, ");
            Sleep(l5);
        }
        else if (i == 5)
        {
            printf("tell ");
            Sleep(l5);
        }
        else if (i == 6)
        {
            printf("me ");
            Sleep(l5);
        }
        else if (i == 7)
        {
            printf("it's ");
            Sleep(l5);
        }
        else if (i == 8)
        {
            printf("real");
            Sleep(l5);
        }
    }

    gotoxy(148, 31);

    for (int i = 1; i <= 10; i++)
    { // l6 = l3
        if (i == 1)
        {
            printf("Touch ");
            Sleep(l3);
        }
        else if (i == 2)
        {
            printf("me ");
            Sleep(l3);
        }
        else if (i == 3)
        {
            printf("with ");
            Sleep(l3);
        }
        else if (i == 4)
        {
            printf("a ");
            Sleep(l3);
        }
        else if (i == 5)
        {
            printf("kiss, ");
            Sleep(l3);
        }
        if (i == 6)
        {
            printf("touch ");
            Sleep(l3);
            Sleep(500);
        }
        else if (i == 7)
        {
            printf("me ");
            Sleep(l3);
        }
        else if (i == 8)
        {
            printf("with ");
            Sleep(l3);
        }
        else if (i == 9)
        {
            printf("a ");
            Sleep(l3);
        }
        else if (i == 10)
        {
            printf("kiss");
            Sleep(l3);
        }
    }

    l71 = 800;
    l72 = 500;
    gotoxy(148, 33);

    for (int i = 1; i <= 8; i++)
    { // l7
        if (i == 1)
        {
            printf("Because ");
            Sleep(l71);
        }
        else if (i == 2)
        {
            printf("this ");
            Sleep(l71);
        }
        else if (i == 3)
        {
            printf("is ");
            Sleep(l71);
        }
        else if (i == 4)
        {
            printf("where ");
            Sleep(l71);
            Sleep(500);
        }
        else if (i == 5)
        {
            printf("I ");
            Sleep(l71);
        }
        else if (i == 6)
        {
            printf("want ");
            Sleep(2500);
        }
        else if (i == 7)
        {
            printf("to ");
            Sleep(l72);
        }
        else if (i == 8)
        {
            printf("be");
            Sleep(l72);
        }
    }

    gotoxy(148, 35);
    Sleep(2000);

    for (int i = 1; i <= 6; i++)
    { // l8
        if (i == 1)
        {
            printf("Where ");
            Sleep(600);
        }
        else if (i == 2)
        {
            printf("it's ");
            Sleep(1400);
        }
        else if (i == 3)
        {
            printf("so ");
            Sleep(500);
        }
        else if (i == 4)
        {
            printf("sweet ");
            Sleep(1500);
        }
        else if (i == 5)
        {
            printf("and ");
            Sleep(800);
        }
        else if (i == 6)
        {
            printf("heavenly");
            Sleep(3200);
        }
    }

    gotoxy(148, 37);
    l9 = 556;

    for (int i = 1; i <= 9; i++)
    { // l9
        if (i == 1)
        {
            printf("I'm ");
            Sleep(l9);
        }
        else if (i == 2)
        {
            printf("giving ");
            Sleep(l9);
        }
        else if (i == 3)
        {
            printf("you ");
            Sleep(l9);
        }
        else if (i == 4)
        {
            printf("all ");
            Sleep(l9);
        }
        else if (i == 5)
        {
            printf("my, ");
            Sleep(l9);
        }
        if (i == 6)
        {
            printf("giving ");
            Sleep(l9);
        }
        else if (i == 7)
        {
            printf("you ");
            Sleep(l9);
        }
        else if (i == 8)
        {
            printf("all ");
            Sleep(l9);
        }
        else if (i == 9)
        {
            printf("my");
            Sleep(l9);
        }
    }

    gotoxy(148, 39);
    l10 = 400;

    for (int i = 1; i <= 5; i++)
    { // l10
        if (i == 1)
        {
            printf("Giving ");
            Sleep(l10);
        }
        else if (i == 2)
        {
            printf("you ");
            Sleep(l10);
        }
        else if (i == 3)
        {
            printf("all ");
            Sleep(l10);
        }
        else if (i == 4)
        {
            printf("my ");
            Sleep(l10);
            Sleep(500);
        }
        else if (i == 5)
        {
            printf("love");
            Sleep(l10);
            Sleep(2500);
        }
    }

    gotoxy(148, 41);
    l9 = 570;

    for (int i = 2; i <= 9; i++)
    { // l11

        if (i == 2)
        {
            printf("Giving ");
            Sleep(l9);
        }
        else if (i == 3)
        {
            printf("you ");
            Sleep(l9);
        }
        else if (i == 4)
        {
            printf("all ");
            Sleep(l9);
        }
        else if (i == 5)
        {
            printf("my, ");
            Sleep(l9);
        }
        if (i == 6)
        {
            printf("giving ");
            Sleep(l9);
        }
        else if (i == 7)
        {
            printf("you ");
            Sleep(l9);
        }
        else if (i == 8)
        {
            printf("all ");
            Sleep(l9);
        }
        else if (i == 9)
        {
            printf("my");
            Sleep(l9);
        }
    }

    gotoxy(148, 43);
    l10 = 400;

    for (int i = 1; i <= 5; i++)
    { // l12
        if (i == 1)
        {
            printf("Giving ");
            Sleep(l10);
        }
        else if (i == 2)
        {
            printf("you ");
            Sleep(l10);
        }
        else if (i == 3)
        {
            printf("all ");
            Sleep(l10);
        }
        else if (i == 4)
        {
            printf("my ");
            Sleep(l10);
            Sleep(500);
        }
        else if (i == 5)
        {
            printf("love");
            Sleep(l10);
            Sleep(500);
        }
    }

    gotoxy(148, 45);
    l13 = 333;

    for (int i = 1; i <= 3; i++)
    { // l13
        if (i == 1)
        {
            printf("All ");
            Sleep(l13);
        }
        else if (i == 2)
        {
            printf("my ");
            Sleep(l13);
        }
        else if (i == 3)
        {
            printf("love");
        }
    }

    int count1 = 0, count2 = 0, count3 = 30;

    for (int i = 1; i <= 16; i++)
    {
        raindrops1(count1, count2, count3);
        count1 += 1;
        count2 += 5;
        count3 -= 5;

        if (count2 == 30)
        {
            count2 = 0;
        }

        if (count1 == 9)
        {
            count2 = 0;
            count3 = 30;
        }
    }

    // 3rd-verse

    gotoxy(73, 38);
    int v1 = 600;
    int v2 = 700;

    for (int i = 2; i <= 11; i++)
    { // l1

        if (i == 2)
        {
            printf("And ");
            Sleep(v1);
        }
        else if (i == 3)
        {
            printf("when ");
            Sleep(v1);
        }
        else if (i == 4)
        {
            printf("you're ");
            Sleep(v1);
        }
        else if (i == 5)
        {
            printf("far ");
            Sleep(v1);
        }
        if (i == 6)
        {
            printf("away, ");
            Sleep(v1);
            Sleep(2500);
        }
        else if (i == 7)
        {
            printf("I ");
            Sleep(v2);
        }
        else if (i == 8)
        {
            printf("still ");
            Sleep(v2);
        }
        else if (i == 9)
        {
            printf("feel ");
            Sleep(v2);
        }
        else if (i == 10)
        {
            printf("it ");
            Sleep(v2);
        }
        else if (i == 11)
        {
            printf("all");
            Sleep(v2);
        }
    }

    gotoxy(73, 40);
    v1 = 600;
    int v3 = 786;

    for (int i = 2; i <= 13; i++)
    { // l2

        if (i == 2)
        {
            printf("And ");
            Sleep(v1);
        }
        else if (i == 3)
        {
            printf("when ");
            Sleep(v1);
        }
        else if (i == 4)
        {
            printf("you're ");
            Sleep(v1);
        }
        else if (i == 5)
        {
            printf("far ");
            Sleep(v1);
        }
        if (i == 6)
        {
            printf("away, ");
            Sleep(v1);
            Sleep(2500);
        }
        else if (i == 7)
        {
            printf("I ");
            Sleep(v3);
        }
        else if (i == 8)
        {
            printf("still ");
            Sleep(v3);
        }
        else if (i == 9)
        {
            printf("feel ");
            Sleep(v3);
        }
        else if (i == 10)
        {
            printf("it ");
            Sleep(v3);
        }
        else if (i == 11)
        {
            printf("all ");
            Sleep(v3);
        }
        else if (i == 12)
        {
            printf("the ");
            Sleep(v3);
        }
        else if (i == 13)
        {
            printf("same");
            Sleep(v3);
        }
    }
    int t12 = 180;

    
    // set-1
    gotoxy(201, 23);
    printf("*");
    fflush(stdout);
    Sleep(t12);
    gotoxy(201, 23);
    printf(" ");
    fflush(stdout);

    Sleep(t12);
    gotoxy(210, 21);
    printf("*");
    gotoxy(206, 18);
    printf("*");

    fflush(stdout);
    Sleep(t12);

    gotoxy(210, 21);
    printf(" ");
    gotoxy(206, 18);
    printf(" ");

    fflush(stdout);
    Sleep(t12);

    gotoxy(209, 19);
    printf("*");

    fflush(stdout);
    Sleep(t12);

    gotoxy(207, 17);
    printf("*");

    fflush(stdout);
    Sleep(t12);

    gotoxy(207, 17);
    printf(" ");
    fflush(stdout);
    Sleep(t12);

    gotoxy(209, 19);
    printf(" ");

    fflush(stdout);
    Sleep(t12);

    gotoxy(207, 17); // set-2
    printf("*");
    gotoxy(202, 23);
    printf("*");
    gotoxy(204, 18);
    printf("*");

    fflush(stdout);
    Sleep(t12);

    gotoxy(207, 17);
    printf(" ");
    gotoxy(202, 23);
    printf(" ");
    gotoxy(204, 18);
    printf(" ");

    fflush(stdout);
    Sleep(t12);

    gotoxy(209, 20);
    printf("*");

    fflush(stdout);
    Sleep(t12);

    gotoxy(209, 20);
    printf(" ");

    gotoxy(206, 17);
    printf("*");

    fflush(stdout);
    Sleep(t12);

    gotoxy(206, 17);
    printf(" ");

    fflush(stdout);
    Sleep(t12);

    gotoxy(208, 20); // set-3
    printf("*");

    fflush(stdout);
    Sleep(t12);

    gotoxy(212, 23);
    printf("*");
    gotoxy(201, 20);
    printf("*");

    fflush(stdout);
    Sleep(t12);

    gotoxy(212, 23);
    printf(" ");
    gotoxy(201, 20);
    printf(" ");

    fflush(stdout);
    Sleep(t12);

    gotoxy(207, 23);
    printf("*");

    fflush(stdout);
    Sleep(t12);

    gotoxy(207, 23);
    printf(" ");

    fflush(stdout);
    Sleep(t12);

    gotoxy(212, 21);
    printf("*");

    fflush(stdout);
    Sleep(t12);

    gotoxy(212, 21);
    printf(" ");
    gotoxy(208, 20);
    printf(" ");

    fflush(stdout);
    Sleep(t12);

    gotoxy(196, 19); // set-4
    printf("*");
    gotoxy(204, 22);
    printf("*");

    fflush(stdout);
    Sleep(t12);

    gotoxy(199, 21);
    printf("*");

    fflush(stdout);
    Sleep(t12);

    gotoxy(199, 21);
    printf(" ");

    fflush(stdout);
    Sleep(t12);

    gotoxy(196, 19);
    printf(" ");
    gotoxy(204, 22);
    printf(" ");

    fflush(stdout);
    Sleep(t12);

    gotoxy(203, 20);
    printf("*");

    fflush(stdout);
    Sleep(t12);

    gotoxy(203, 20);
    printf(" ");

    fflush(stdout);
    Sleep(t12);

    gotoxy(211, 22);
    printf("*");

    fflush(stdout);
    Sleep(t12);

    gotoxy(211, 22);
    printf(" ");

    fflush(stdout);
    Sleep(t12);

    Sleep(500);
    gotoxy(73, 42);
    int v4 = 500;

    for (int i = 2; i <= 8; i++)
    { // l3

        if (i == 2)
        {
            printf("And ");
            Sleep(v4);
        }
        else if (i == 3)
        {
            printf("when ");
            Sleep(v4);
        }
        else if (i == 4)
        {
            printf("you're ");
            Sleep(v4);
        }
        else if (i == 5)
        {
            printf("far ");
            Sleep(v4);
        }
        if (i == 6)
        {
            printf("away, ");
            Sleep(v4);
            Sleep(2500);
        }
        else if (i == 7)
        {
            printf("far ");
            Sleep(1000);
        }
        else if (i == 8)
        {
            printf("away");
            Sleep(5000);
        }
    }

    // star

    int t11 = 350;

    gotoxy(197, 5);
    printf("*");
    Sleep(t11);
    gotoxy(197, 6);
    printf("*");
    Sleep(t11);

    for (int i = 1; i <= 3; i++)
    {
        gotoxy(196, (i + 6));
        printf("*");
        gotoxy(198, (i + 6));
        printf("*");
        Sleep(t11);
    }

    for (int i = 1; i <= 2; i++)
    {
        gotoxy(195, (i + 9));
        printf("*");
        gotoxy(199, (i + 9));
        printf("*");
        Sleep(t11);
    }

    for (int i = 1, j = 4; i <= 4; i++, j--)
    {
        gotoxy((j + 190), 12);
        printf("*");
        gotoxy((i + 199), 12);
        printf("*");
        Sleep(t11);
    }

    for (int i = 1, j = 6; i <= 6; i++, j--)
    {
        gotoxy((j + 184), 13);
        printf("*");
        gotoxy((i + 203), 13);
        printf("*");
        Sleep(t11);
    }

    for (int i = 1, j = 4; i <= 4; i++, j--)
    {
        gotoxy((j + 180), 14);
        printf("*");
        gotoxy((i + 209), 14);
        printf("*");
        Sleep(t11);
    }

    for (int i = 1, j = 6; i <= 6; i++, j--)
    {
        gotoxy((i + 184), 15);
        printf("*");
        gotoxy((j + 203), 15);
        printf("*");
        Sleep(t11);
    }

    for (int i = 1, j = 4; i <= 4; i++, j--)
    {
        gotoxy((i + 190), 16);
        printf("*");
        gotoxy((j + 199), 16);
        printf("*");
        Sleep(t11);
    }

    for (int i = 1; i <= 2; i++)
    {
        gotoxy(195, (i + 16));
        printf("*");
        gotoxy(199, (i + 16));
        printf("*");
        Sleep(t11);
    }

    for (int i = 1; i <= 3; i++)
    {
        gotoxy(196, (i + 18));
        printf("*");
        gotoxy(198, (i + 18));
        printf("*");
        Sleep(t11);
    }

    gotoxy(197, 22);
    printf("*");
    Sleep(t11);
    gotoxy(197, 23);
    printf("*");
    Sleep(t11);

    Sleep(3000);

    gotoxy(73, 44);
    l9 = 556;

    for (int i = 1; i <= 9; i++)
    { // l4
        if (i == 1)
        {
            printf("I'm ");
            Sleep(l9);
        }
        else if (i == 2)
        {
            printf("giving ");
            Sleep(l9);
        }
        else if (i == 3)
        {
            printf("you ");
            Sleep(l9);
        }
        else if (i == 4)
        {
            printf("all ");
            Sleep(l9);
        }
        else if (i == 5)
        {
            printf("my, ");
            Sleep(l9);
        }
        if (i == 6)
        {
            printf("giving ");
            Sleep(l9);
        }
        else if (i == 7)
        {
            printf("you ");
            Sleep(l9);
        }
        else if (i == 8)
        {
            printf("all ");
            Sleep(l9);
        }
        else if (i == 9)
        {
            printf("my");
            Sleep(l9);
        }
    }

    gotoxy(73, 46);
    l10 = 400;

    for (int i = 1; i <= 5; i++)
    { // l5
        if (i == 1)
        {
            printf("Giving ");
            Sleep(l10);
        }
        else if (i == 2)
        {
            printf("you ");
            Sleep(l10);
        }
        else if (i == 3)
        {
            printf("all ");
            Sleep(l10);
        }
        else if (i == 4)
        {
            printf("my ");
            Sleep(l10);
            Sleep(500);
        }
        else if (i == 5)
        {
            printf("love");
            Sleep(l10);
            Sleep(2500);
        }
    }

    gotoxy(73, 48);
    l9 = 570;

    for (int i = 2; i <= 9; i++)
    { // l6

        if (i == 2)
        {
            printf("Giving ");
            Sleep(l9);
        }
        else if (i == 3)
        {
            printf("you ");
            Sleep(l9);
        }
        else if (i == 4)
        {
            printf("all ");
            Sleep(l9);
        }
        else if (i == 5)
        {
            printf("my, ");
            Sleep(l9);
        }
        if (i == 6)
        {
            printf("giving ");
            Sleep(l9);
        }
        else if (i == 7)
        {
            printf("you ");
            Sleep(l9);
        }
        else if (i == 8)
        {
            printf("all ");
            Sleep(l9);
        }
        else if (i == 9)
        {
            printf("my");
            Sleep(l9);
        }
    }

    gotoxy(73, 50);
    l10 = 400;

    for (int i = 1; i <= 5; i++)
    { // l7
        if (i == 1)
        {
            printf("Giving ");
            Sleep(l10);
        }
        else if (i == 2)
        {
            printf("you ");
            Sleep(l10);
        }
        else if (i == 3)
        {
            printf("all ");
            Sleep(l10);
        }
        else if (i == 4)
        {
            printf("my ");
            Sleep(l10);
            Sleep(500);
        }
        else if (i == 5)
        {
            printf("love");
            Sleep(l10);
            Sleep(500);
        }
    }

    getchar();

    return 0;
}