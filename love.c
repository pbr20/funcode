#include <stdio.h>
#include <windows.h>

void gotoxy(int x, int y)
{
    printf("%c[%d;%df", 0x1B, y, x);
}

int main()
{

int time =200;

system("cls");

gotoxy(60 , 20);
printf("*");
Sleep(time);

for(int i=59,j=61; i>=59,j<=61; i--,j++){
    gotoxy(i , 19);
    printf("*");
    gotoxy(j , 19);
    printf("*");
    Sleep(time);
}

for(int i=58,j=62; i>=50,j<=70; i--,j++){
    gotoxy(i , 18);
    printf("*");
    gotoxy(j , 18);
    printf("*");
    Sleep(time);
}

for(int i=49,j=19,k=71,l=19; l<=20; i--,j++,k++,l++){
    gotoxy(i , j);
    printf("*");
    gotoxy(k , l);
    printf("*");
    Sleep(time);
}

for(int i=21,j=21; i<=22; i++,j++){
    gotoxy(47 , i);
    printf("*");
    gotoxy(73 , j);
    printf("*");
    Sleep(time);
}

for(int i=23,j=23; i<=24; i++,j++){
    gotoxy(48 , i);
    printf("*");
    gotoxy(72 , j);
    printf("*");
    Sleep(time);
}

for(int i=49,j=25,k=71,l=25; l<=30; i+=2,j++,k-=2,l++){
    gotoxy(i , j);
    printf("*");
    gotoxy(k , l);
    printf("*");
    Sleep(time);
}

gotoxy(60 , 31);
printf("*");
Sleep(time);

getchar();


return 0;

}