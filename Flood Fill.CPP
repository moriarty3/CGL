#include<graphics.h>
#include<conio.h>
#include<iostream.h>
#include<dos.h>



void floodfill(int x , int y , int fillcolor , int oldcolor)
{
  if (getpixel(x,y) == oldcolor)
  {

    putpixel(x,y,fillcolor);
    floodfill(x+1,y,fillcolor,oldcolor);
    floodfill(x-1,y,fillcolor,oldcolor);
    floodfill(x,y+1,fillcolor,oldcolor);
    floodfill(x,y-1,fillcolor,oldcolor);

  }
}


void main()

{
int gd = DETECT , gm;
int x = 320,y=240;
int cx,cy,radius;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
rectangle(x-20,y-50,x+30,y+50);
floodfill(x,y,BLUE,BLACK);
getch();
closegraph();

}
