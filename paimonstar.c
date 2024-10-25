#include <stdio.h>
#include <windows.h>

void gotoxy(int x, int y)
{
    printf("%c[%d;%df", 0x1B, y, x);
}

int main()
{
system("cls");

int t11 = 350;

gotoxy(197 , 5);
printf("*");
Sleep(t11);
gotoxy(197 , 6);
printf("*");
Sleep(t11);

for(int i=1; i<=3; i++){
    gotoxy(196 , (i+6));
    printf("*");
    gotoxy(198 , (i+6));
    printf("*");
    Sleep(t11);
}

for(int i=1; i<=2; i++){
    gotoxy(195 , (i+9));
    printf("*");
    gotoxy(199 , (i+9));
    printf("*");
    Sleep(t11);
}

for(int i=1,j=4; i<=4; i++,j--){
    gotoxy((j+190) , 12);
    printf("*");
    gotoxy((i+199) , 12);
    printf("*");
    Sleep(t11);
}

for(int i=1,j=6; i<=6; i++,j--){
    gotoxy((j+184) , 13);
    printf("*");
    gotoxy((i+203) , 13);
    printf("*");
    Sleep(t11);
}

for(int i=1,j=4; i<=4; i++,j--){
    gotoxy((j+180) , 14);
    printf("*");
    gotoxy((i+209) , 14);
    printf("*");
    Sleep(t11);
}

for(int i=1,j=6; i<=6; i++,j--){
    gotoxy((i+184) , 15);
    printf("*");
    gotoxy((j+203) , 15);
    printf("*");
    Sleep(t11);
}

for(int i=1,j=4; i<=4; i++,j--){
    gotoxy((i+190) , 16);
    printf("*");
    gotoxy((j+199) , 16);
    printf("*");
    Sleep(t11);
}

for(int i=1; i<=2; i++){
    gotoxy(195 , (i+16));
    printf("*");
    gotoxy(199 , (i+16));
    printf("*");
    Sleep(t11);
}

for(int i=1; i<=3; i++){
    gotoxy(196 , (i+18));
    printf("*");
    gotoxy(198 , (i+18));
    printf("*");
    Sleep(t11);
}

gotoxy(197 , 22);
printf("*");
Sleep(t11);
gotoxy(197 , 23);
printf("*");
Sleep(t11);

getchar();

return 0;

}