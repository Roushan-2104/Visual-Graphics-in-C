#include <dos.h>
#include<windows.h>
#include <stdio.h>
#include <conio.h>
#include <graphics.h>
int main()
{
    int gmode = DETECT, gdriver , i,j,k,l;
    char g[] = " ";
    initgraph(&gmode , &gdriver, g);
    for (i = 50 ; i<=300 ; i+=5)
    {
        line(50,50,50,i);
        delay(50);
    }
    for (j = 50 ; j<=300 ; j+=5)
    {
        line(j,j,50,j);
        delay(50);
    }
    for (k = 50 ; k<=300 ; k+=5)
    {
        line(k,k,k,50);
        delay(50);
    }
    for (l = 50 ; l<=300 ; l+=5)
    {
        line(50,50,l,50);
        delay(50);
    }
    _getch();

}
