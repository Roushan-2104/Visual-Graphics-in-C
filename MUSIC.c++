/*#include <dos.h>
#include<windows.h>
#include <stdio.h>
#include <conio.h>
int main()
{
    int i;
    for (i=50;i<1000;i+=2)
    {
        Beep(i , 10);
        Sleep(0.01);
    }
    getch();
}*/
#include <dos.h>
#include<windows.h>
#include <stdio.h>
#include <conio.h>
int main()
{
    int i;
    for (i=1000;i>50;i-=50)
    {
        Beep(i , 1000);
    }
    _getch();
}
