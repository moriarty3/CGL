#include<graphics.h>
#include<iostream.h>
#include<conio.h>
#include<math.h>
class merge
{
public:
int x11,y11,x22,y22,x33,y33,tx,ty,x1,y1,x2,y2,x3,y3,sx,sy,a;
void translation()
{
cout<<"Enter the 1st Co-ordinate of the Triangle: \n";
cin>>x1>>y1;
cout<<"Enter the 2nd Co-ordinate: \n";
cin>>x2>>y2;
cout<<"Enter the 3rd Co-ordinate: \n";
cin>>x3>>y3;
cout<<"Enter the Values of Translating Factors tx and ty: \n";
cin>>tx>>ty;
line(x1,y1,x2,y2);
line(x2,y2,x3,y3);
line(x3,y3,x1,y1);
x11=x1+tx;
y11=y1+ty;
x22=x2+tx;
y22=y2+ty;
x33=x3+tx;
y33=y3+ty;
line(x11,y11,x22,y22);
line(x22,y22,x33,y33);
line(x33,y33,x11,y11);
}
void rotation()
{
cout<<"Enter the 1st Co-ordinate of the Triangle: \n";
cin>>x1>>y1;
cout<<"Enter 2nd Co-ordinate: \n";
cin>>x2>>y2;
cout<<"Enter the 3rd Co-ordinate: \n";
cin>>x3>>y3;
cout<<"Enter the Values of Translating Factors tx and ty: \n";
cin>>tx>>ty;
cout<<"Enter the Angle of Rotation: \n";
cin>>a;
line(x1,y1,x2,y2);
line(x2,y2,x3,y3);
line(x3,y3,x1,y1);
x11=x1*cos(a)-y1*sin(a)-tx*cos(a)+ty*sin(a)+tx;
y11=x1*sin(a)+y1*cos(a)-tx*sin(a)-ty*sin(a)+ty;
x22=x2*cos(a)-y2*sin(a)-tx*cos(a)+ty*sin(a)+tx;
y22=x2*sin(a)+y2*cos(a)-tx*sin(a)-ty*sin(a)+ty;
x33=x3*cos(a)-y3*sin(a)-tx*cos(a)+ty*sin(a)+tx;
y33=x3*sin(a)+y3*cos(a)-tx*sin(a)-ty*sin(a)+ty;
line(x11,y11,x22,y22);
line(x22,y22,x33,y33);
line(x33,y33,x11,y11);
}
void  scaling()
{
cout<<"Enter the Co-ordinates of the Triangle: \n";
cin>>x1>>y1;
cout<<"Enter 2nd Co-ordinate: \n";
cin>>x2>>y2;
cout<<"Enter the 3rd Co-ordinate: \n";
cin>>x3>>y3;
cout<<"Enter the Values of Scaling Factors sx and sy: \n";
cin>>sx>>sy;
line(x1,y1,x2,y2);
line(x2,y2,x3,y3);
line(x3,y3,x1,y1);
x11=sx*x1;
y11=sy*y1;
x22=sx*x2;
y22=sy*y2;
x33=sx*x3;
y33=sy*y3;
line(x11,y11,x22,y22);
line(x22,y22,x33,y33);
line(x33,y33,x11,y11);
}
};
int main()
{
merge m;
int choice;
int gd=DETECT, gm;
cout<<"1. Translation \n2. Rotation \n3. Scaling \n";
cin>>choice;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
switch(choice)
{
case 1:m.translation();
break;
case 2:m.rotation();
break;
case 3:m.scaling();
break;
default:cout<<"Incorrect Input"<<endl;
break;
}
getch();
closegraph();
return 0;
}

//Translation   //Rotation   //Scaling
100 100         100 100      100 100
200 200         200 200      200 200
200 100         200 100      200 100
50 50           50 50        1 2
                1.570