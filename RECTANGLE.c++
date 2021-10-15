#include <dos.h>
#include<windows.h>
#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <wingdi.h>

int main()
{
    int gmode = DETECT, gdriver , i,j,k,l;
    char g[] = " ";
    initgraph(&gmode , &gdriver, g);
    setbkcolor(7);
    for (i = 50 ; i<=200 ; i+=5)
    {
        setcolor(RED);
        line(50,50,50,i);
        delay(50);
    }
    for (j = 400 ; j>=50 ; j-=5)
    {
        setcolor(GREEN);
        line(200,200,j,200);
        delay(50);
    }
    for (k = 200 ; k>=50 ; k-=5)
    {
        setcolor(YELLOW);
        line(300,300,300,k);
        delay(50);
    }
    for (l = 50 ; l<=400 ; l+=5)
    {
        setcolor(MAGENTA);
        line(50,50,l,50);
        delay(50);
    }
    _getch();

}
