#include<graphics.h>
#include<conio.h>
#include<iostream.h>
void bres_circle(int xc,int yc,int r)
{
int x = 0;
int y = r;
int d = 3-2*r;
while(x<=y)
{
putpixel(xc + x , yc+y,RED);
putpixel(xc - x , yc+y,RED);
putpixel(xc + x , yc-y,RED);
putpixel(xc - x , yc - y,RED);
putpixel(xc - y , yc - x,RED);
putpixel(xc-y,yc+x,RED);
putpixel(xc+y,yc-x,RED);
putpixel(xc+y,yc+x,RED);
x = x+1;
if(d<0)
{
d = d+4*x + 6;
}
else
{
d = d+4*(x-y) + 10;
y = y-1;
}
}
}
void main()
{
int gd = DETECT , gm;
int x = 320,y=240;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
cout<<"Enter the Values of x and y \n"<<endl;
int xc,yc;
cin>>xc>>yc;
bres_circle(xc+x,yc+y,100);
getch();
closegraph();
}
