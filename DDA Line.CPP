#include<iostream.h>
#include<conio.h>
#include<graphics.h>
int main()
{
int gd=DETECT, gm, res;
float x1, x2, y1, y2, m;
int z;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
res = graphresult();
if(res != 0)
{
cout<<"Initialization Failed";
}
cout<<"Enter the Co-ordinate of x1: \n";
cin>>x1;
cout<<"Enter the Co-ordinate of y1: \n";
cin>>y1;
cout<<"Enter the Co-ordinate of x2: \n";
cin>>x2;
cout<<"Enter the Co-ordinate of y2: \n";
cin>>y2;
m =  (y1 - y2)/(x1 - x2);
if(m == 1)
{
if(x1 > x2)
{
while(x1 != x2)
{
putpixel(x1, y1, RED);
x1 = x1 - 1;
y1 = y1 - 1;
}
}
else
{
while(x1 != x2)
{
putpixel(x1, y1, RED);
x1 = x1 + 1;
y1 = y1 + 1;
}
}
}
else if(m < 1)
{
z = y1;
if(x1 > x2)
{
while(x1 != x2)
{
putpixel(x1, z, RED);
x1 = x1 - 1;
y1 = y1 - m;
z = y1;
}
}
else
{
while(x1 != x2)
{
putpixel(x1, z, RED);
x1 = x1 + 1;
y1 = y1 + m;
z = y1;
}
}
}
else
{
z = x1;
if(y1 > y2)
{
while(y1 != y2)
{
putpixel(z, y1, RED);
x1 = x1 - m;
y1 = y1 - 1;
z = x1;
}
}
else
{
while(y1 != y2)
{
putpixel(z, y1, RED);
x1 = x1 + m;
y1 = y1 + 1;
z = x1;
}
}
}
getch();
closegraph();
return 0;
}