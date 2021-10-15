#include <stdio.h>
#include <conio.h>
#include <graphics.h>

int main()
{
    int gmode = DETECT , gdriver;
    char g[] = " ";
    initgraph(&gmode , &gdriver, g);
    line(50,50,50,400);
    line(50,50,400,50);
    line(400,400,400,50);
    line(400,400,50,400);
    getch();
    closegraph();
}
