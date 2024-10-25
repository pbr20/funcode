#include <stdio.h>
#include <windows.h>

void gotoxy(int x, int y)
{
    printf("%c[%d;%df", 0x1B, y, x);
}

int main()
{
    int t12 = 180;

system("cls");
                        //set-1
gotoxy(201 , 23);
printf("*");
fflush(stdout);
Sleep(t12);
gotoxy(201 , 23);
printf(" ");
fflush(stdout);

Sleep(t12);
gotoxy(210 , 21);
printf("*");
gotoxy(206 , 18);
printf("*");

fflush(stdout);
Sleep(t12);

gotoxy(210 , 21);
printf(" ");
gotoxy(206 , 18);
printf(" ");

fflush(stdout);
Sleep(t12);

gotoxy(209 , 19);
printf("*");

fflush(stdout);
Sleep(t12);

gotoxy(207 , 17);
printf("*");

fflush(stdout);
Sleep(t12);

gotoxy(207 , 17);
printf(" ");
fflush(stdout);
Sleep(t12);


gotoxy(209 , 19);
printf(" ");

fflush(stdout);
Sleep(t12);



gotoxy(207 , 17);       //set-2
printf("*");
gotoxy(202 , 23);
printf("*");
gotoxy(204 , 18);
printf("*");

fflush(stdout);
Sleep(t12);

gotoxy(207 , 17);
printf(" ");
gotoxy(202 , 23);
printf(" ");
gotoxy(204 , 18);
printf(" ");

fflush(stdout);
Sleep(t12);


gotoxy(209 , 20);
printf("*");

fflush(stdout);
Sleep(t12);

gotoxy(209 , 20);
printf(" ");

gotoxy(206 , 17);
printf("*");

fflush(stdout);
Sleep(t12);



gotoxy(206 , 17);
printf(" ");

fflush(stdout);
Sleep(t12);

gotoxy(208 , 20);       //set-3
printf("*");

fflush(stdout);
Sleep(t12);

gotoxy(212 , 23);
printf("*");
gotoxy(201 , 20);
printf("*");

fflush(stdout);
Sleep(t12);

gotoxy(212 , 23);
printf(" ");
gotoxy(201 , 20);
printf(" ");

fflush(stdout);
Sleep(t12);

gotoxy(207 , 23);
printf("*");

fflush(stdout);
Sleep(t12);

gotoxy(207 , 23);
printf(" ");

fflush(stdout);
Sleep(t12);

gotoxy(212 , 21);
printf("*");

fflush(stdout);
Sleep(t12);

gotoxy(212 , 21);
printf(" ");
gotoxy(208 , 20);       
printf(" ");

fflush(stdout);
Sleep(t12);




gotoxy(196 , 19);       //set-4
printf("*");
gotoxy(204 , 22);
printf("*");

fflush(stdout);
Sleep(t12);

gotoxy(199 , 21);
printf("*");

fflush(stdout);
Sleep(t12);

gotoxy(199 , 21);
printf(" ");

fflush(stdout);
Sleep(t12);

gotoxy(196 , 19);       
printf(" ");
gotoxy(204 , 22);
printf(" ");

fflush(stdout);
Sleep(t12);


gotoxy(203 , 20);
printf("*");

fflush(stdout);
Sleep(t12);

gotoxy(203 , 20);
printf(" ");

fflush(stdout);
Sleep(t12);

gotoxy(211 , 22);
printf("*");

fflush(stdout);
Sleep(t12);

gotoxy(211 , 22);
printf(" ");

fflush(stdout);
Sleep(t12);

getchar();

return 0;

}