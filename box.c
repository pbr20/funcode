#include <stdio.h>
#include <windows.h>

void gotoxy(int x, int y)
{
    printf("%c[%d;%df", 0x1B, y, x);
}

int main()
{
    system("cls");

int t2=50;

for(int i=3;i<=49;i++){
    gotoxy(i , 18);
    printf("+");
    Sleep(t2);
}

for(int i=18;i<=46;i++){
    gotoxy(49 , i);
    printf("+");
    Sleep(t2);
}

for(int i=49;i>=3;i--){
    gotoxy(i , 46);
    printf("+");
    Sleep(t2);
}

for(int i=46;i>=18;i--){
    gotoxy(3 , i);
    printf("+");
    Sleep(t2);
}



getchar();

    return 0;
}
