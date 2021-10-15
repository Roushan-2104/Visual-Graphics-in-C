#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<math.h>
#include<dos.h>

int main()
{
    int gmode = DETECT,gdriver,i;
    float a =0.00,x,y;
    char g[] = " ";
    initgraph(&gmode,&gdriver,g);
    for(;a<6.28;)
    {
        x = 340 + cos(a)*100;
        y = 240 + sin(a)*100;
        putpixel(x,y,GREEN);
        a+=0.1;
        delay(50);
    }
    getch();

}
