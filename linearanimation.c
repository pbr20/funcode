#include<stdio.h>
#include<windows.h>

void gotoxy(int x, int y)
{
    printf("%c[%d;%df", 0x1B, y, x);
}

int main()
{

system("cls");

int t6 = 50;

for(int i=1; i<=200; i++){
    gotoxy(15 , (i+5));
    printf("*");
    fflush(stdout);
    gotoxy(15 , (i+6));
    printf("*");
    fflush(stdout);
    

    Sleep(t6);

    gotoxy(15 , (i+5));
    printf(" ");
    fflush(stdout);
    gotoxy(15 , (i+6));
    printf(" ");
    fflush(stdout);
    
    //Sleep(t6); for blinking stars
}






getchar();

return 0;

}