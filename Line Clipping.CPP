#include<iostream.h>
#include<graphics.h>
#include<conio.h>
const int inside = 0;
const int Left = 1;
const int Right = 2;
const int Top  = 8;
const int Bottom = 4;
int x_center = 320,y_center=240;
const int x_min = x_center + 100;
const int x_max = x_center + 100;
const int y_max = y_center + 100;
const int y_min = y_center - 100;
int compute_code(int x , int y)
{
int code  = inside;
if(x<x_min)
code=Left;
else if (x>x_max)
{
code = Right;
}
if(y<y_min)
code = Bottom;
else if(y>y_max)
code = Top;
return code;
}
void cohenSutherland(int x1,int y1,int x2,int y2)
{
int code1 = compute_code(x1,y1);
int code2 = compute_code(x2,y2);
int x,y;
int accept = 0;
while(1)
{
if((code1 == 0)&& (code2==0))
{
accept = 1;
break;
}
else if(code1 == code2)
break;
else
{
float m = (y_max-y_min)/(x_max-x_min);
int code_out;
if(code1 !=0)
code_out = code1;
else
code_out = code2;
if(code_out ==Top)
{
x = x1 + (x2-x1)*m;
y = y_max;
}
else if(code_out == Bottom)
{
x = x1 + (x2-x1)*m;
y = y_min;
}
else if(code_out == Right)
{
y = y1 + (y2-y1)/m;
x = x_max;
}
else if(code_out == Left)
{
y = y1 + (y2-y1)/m;
x = x_min;
}
if(code_out == code1)
{
x1 = x;
y1 = y;
code1 = compute_code(x1,y1);
}
else
{
x2 = x;
y2 = y;
code2 = compute_code(x2, y2);
}
}
}
if(accept = 1)
{
//cout <<"Line accepted from " << x1 << ", "
//<< y1 << " to "<< x2 << ", " << y2 << endl;
line(x1,y1,x2,y2);
}
}
void main()
{
int gd = DETECT , gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
int x1,x2,y1,y2;
cout<<"Enter the Co-ordinates x1, x2, y1 and y2: \n"<<endl;
cin>>x1>>x2>>y1>>y2;
cohenSutherland(x1+x_center,y1+y_center,x2+x_center,y2+y_center);
getch();
}