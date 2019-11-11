#include <graphics.h>
#include <iostream.h>
#include <conio.h>
int main()
{
int i,gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
setcolor(YELLOW);
circle(300,100,40);
setfillstyle(SOLID_FILL,YELLOW);
floodfill(300,100,YELLOW);
setcolor(BLACK);
setfillstyle(SOLID_FILL,BLACK);
fillellipse(310,85,2,6);
fillellipse(290,85,2,6);
ellipse(300,100,205,335,20,9);
ellipse(300,100,205,335,20,10);
ellipse(300,100,205,335,20,11);
getch();
return 0;
}
