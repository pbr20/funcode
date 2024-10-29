#include <stdio.h>
#include <windows.h>

void gotoxy(int x, int y)
{
    printf("%c[%d;%df", 0x1B, y, x);
}

void cloud(int x, int y){

int t3 = 200;

        for(int i=2; i>=1; i--){
    gotoxy(x , (i+y));
    printf("*");
    Sleep(t3);
}

gotoxy((x+1) , y);
printf("*");
Sleep(t3);

for(int i=1; i<=6; i++){
    gotoxy((i+x+1), (y-1));
    printf("*");
    Sleep(t3);
}

gotoxy((x+8) , y);
printf("*");
Sleep(t3);

for(int i=2; i>=1; i--){
    gotoxy((x+9) , (i+y-3));
    printf("*");
    Sleep(t3);
}

for(int i=2; i>=1; i--){
    gotoxy((x+10) , (i+y-5));
    printf("*");
    Sleep(t3);
}

for(int i=1; i<=4; i++){
    gotoxy((i+x+10), (y-5));
    printf("*");
    Sleep(t3);
}

for(int i=1; i<=8; i++){
    gotoxy((i+x+14), (y-6));
    printf("*");
    Sleep(t3);
}

for(int i=1; i<=4; i++){
    gotoxy((i+x+22), (y-5));
    printf("*");
    Sleep(t3);
}

for(int i=1; i<=2; i++){
    gotoxy((x+27) , (i+y-5));
    printf("*");
    Sleep(t3);
}

gotoxy((x+28) , (y-2));
printf("*");
Sleep(t3);

gotoxy((x+29) , (y-1));
printf("*");
Sleep(t3);

gotoxy((x+30) , (y-2));
printf("*");
Sleep(t3);

for(int i=1; i<=6; i++){
    gotoxy((i+x+30), (y-3));
    printf("*");
    Sleep(t3);
}

gotoxy((x+37) , (y-2));
printf("*");
Sleep(t3);

gotoxy((x+38) , (y-1));
printf("*");
Sleep(t3);

for(int i=1; i<=3; i++){
    gotoxy((x+39) , (i+y-1));
    printf("*");
    Sleep(t3);
}

for(int i=(x+38); i>=(x+1); i--){
    gotoxy(i , (y+3));
    printf("*");
    Sleep(t3);
}
}

int main()
{
    system("cls");


    cloud(65 , 22);





getchar();

return 0;

}