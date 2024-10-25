#include <stdio.h>
#include <windows.h>

void gotoxy(int x, int y)
{
    printf("%c[%d;%df", 0x1B, y, x);
}

int main()
{
    system("cls");

int t3 = 200;


for(int i=2; i>=1; i--){
    gotoxy(65 , (i+22));
    printf("*");
    Sleep(t3);
}

gotoxy(66 , 22);
printf("*");
Sleep(t3);

for(int i=1; i<=6; i++){
    gotoxy((i+66), 21);
    printf("*");
    Sleep(t3);
}

gotoxy(73 , 22);
printf("*");
Sleep(t3);

for(int i=2; i>=1; i--){
    gotoxy(74 , (i+19));
    printf("*");
    Sleep(t3);
}

for(int i=2; i>=1; i--){
    gotoxy(75 , (i+17));
    printf("*");
    Sleep(t3);
}

for(int i=1; i<=4; i++){
    gotoxy((i+75), 17);
    printf("*");
    Sleep(t3);
}

for(int i=1; i<=8; i++){
    gotoxy((i+79), 16);
    printf("*");
    Sleep(t3);
}

for(int i=1; i<=4; i++){
    gotoxy((i+87), 17);
    printf("*");
    Sleep(t3);
}

for(int i=1; i<=2; i++){
    gotoxy(92 , (i+17));
    printf("*");
    Sleep(t3);
}

gotoxy(93 , 20);
printf("*");
Sleep(t3);

gotoxy(94 , 21);
printf("*");
Sleep(t3);

gotoxy(95 , 20);
printf("*");
Sleep(t3);

for(int i=1; i<=6; i++){
    gotoxy((i+95), 19);
    printf("*");
    Sleep(t3);
}

gotoxy(102 , 20);
printf("*");
Sleep(t3);

gotoxy(103 , 21);
printf("*");
Sleep(t3);

for(int i=1; i<=3; i++){
    gotoxy(104 , (i+21));
    printf("*");
    Sleep(t3);
}

for(int i=103; i>=66; i--){
    gotoxy(i , 25);
    printf("*");
    Sleep(t3);
}

getchar();

return 0;

}