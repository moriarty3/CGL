#include<iostream.h>
#include<graphics.h>
#include<math.h>
#include<conio.h>
class trans
{
public:
int x,y,gd,gm,x1,y1,x2,y2,x3,y3,x4,y4,x5,y5,x6,y6,x7,y7,x8,y8;
trans()
{ 
gd=DETECT;
}
int z1,z2,z3,z4,z5,z6,z7,z8;
int xt1,yt1,xt2,yt2,xt3,yt3,xt4,yt4,xt5,yt5,xt6,yt6,xt7,yt7,xt8,yt8,zt1,zt2,zt3,zt4,zt5,zt6,zt7,zt8;
int tx,ty,tz;
int xr1,yr1,xr2,yr2,xr3,yr3,xr4,yr4,xr5,yr5,xr6,yr6,xr7,yr7,xr8,yr8;
double A;
int xs1,ys1,xs2,ys2,xs3,ys3,sx,sy;
void insert()
{
cout<<"Enter the 1st Co-ordinate of the 1st Cube: \n";
cin>>x1>>y1;
cout<<"Enter the 2nd Co-ordinate of the 1st Cube: \n";
cin>>x2>>y2;
cout<<"Enter the 3rd Co-ordinate of the 1st Cube: \n";
cin>>x3>>y3;
cout<<"Enter the 4th Co-ordinate of the 1st Cube: \n";
cin>>x4>>y4;
cout<<"Enter the 1st Co-ordinate of the 2nd Cube: \n";
cin>>x5>>y5;
cout<<"Enter the 2nd Co-ordinate of the 2nd Cube: \n";
cin>>x6>>y6;
cout<<"Enter the 3rd Co-ordinate of the 2nd Cube: \n";
cin>>x7>>y7;
cout<<"Enter the 4th Co-ordinate of the 2nd Cube: \n";
cin>>x8>>y8;
}
void scaling()
{
cout<<"Enter the values of Scaling Factors sx, sy and sz:"<<endl;
cin>>tx>>ty>>tz;
xt1=x1*tx;
yt1=y1*ty;
xt2=x2*tx;
yt2=y2*ty;
xt3=x3*tx;
yt3=y3*ty;
xt4=x4*tx;
yt4=y4*ty;
xt5=x5*tx;
yt5=y5*ty;
xt6=x6*tx;
yt6=y6*ty;
xt7=x7*tx;
yt7=y7*ty;
xt8=x8*tx;
yt8=y8*ty;
zt1=z1*tz;
zt2=z2*tz;
zt3=z3*tz;
zt4=z4*tz;
zt5=z5*tz;
zt6=z6*tz;
zt7=z7*tz;
zt8=z8*tz;
line(x1,y1,x2,y2);
line(x2,y2,x3,y3);
line(x3,y3,x4,y4);
line(x4,y4,x1,y1);
line(x5,y5,x6,y6);
line(x6,y6,x7,y7);
line(x7,y7,x8,y8);
line(x8,y8,x5,y5);
line(x1,y1,x5,y5);
line(x2,y2,x6,y6);
line(x3,y3,x7,y7);
line(x4,y4,x8,y8);
getch();
cleardevice();
rectangle(xt1,yt1,xt3,yt3);
rectangle(xt5,yt5,xt7,yt7);
line(xt1,yt1,xt5,yt5);
line(xt2,yt2,xt6,yt6);
line(xt3,yt3,xt7,yt7);
line(xt4,yt4,xt8,yt8);
}
void translation()
{
cout<<"Enter the values of Translating Factors tx, ty and tz:"<<endl;
cin>>tx>>ty>>tz;
xt1=x1+tx;
yt1=y1+ty;
xt2=x2+tx;
yt2=y2+ty;
xt3=x3+tx;
yt3=y3+ty;
xt4=x4+tx;
yt4=y4+ty;
xt5=x5+tx;
yt5=y5+ty;
xt6=x6+tx;
yt6=y6+ty;
xt7=x7+tx;
yt7=y7+ty;
xt8=x8+tx;
yt8=y8+ty;
zt1=z1+tz;
zt2=z2+tz;
zt3=z3+tz;
zt4=z4+tz;
zt5=z5+tz;
zt6=z6+tz;
zt7=z7+tz;
zt8=z8+tz;
line(x1,y1,x2,y2);
line(x2,y2,x3,y3);
line(x3,y3,x4,y4);
line(x4,y4,x1,y1);
line(x5,y5,x6,y6);
line(x6,y6,x7,y7);
line(x7,y7,x8,y8);
line(x8,y8,x5,y5);
line(x1,y1,x5,y5);
line(x2,y2,x6,y6);
line(x3,y3,x7,y7);
line(x4,y4,x8,y8);
getch();
cleardevice();
rectangle(xt1,yt1,xt3,yt3);
rectangle(xt5,yt5,xt7,yt7);
line(xt1,yt1,xt5,yt5);
line(xt2,yt2,xt6,yt6);
line(xt3,yt3,xt7,yt7);
line(xt4,yt4,xt8,yt8);
}
void rotation_x()
{
cout<<"Enter the Angle of Rotation for x:"<<endl;
cin>>A;
xr1=x1*cos(A)-y1*sin(A);
yr1=x1*sin(A)+y1*cos(A);
xr2=x2*cos(A)-y2*sin(A);
yr2=x2*sin(A)+y2*cos(A);
xr3=x3*cos(A)-y3*sin(A);
yr3=x3*sin(A)+y3*cos(A);
xr4=x4*cos(A)-y4*sin(A);
yr4=x4*sin(A)+y4*cos(A);
xr5=x5*cos(A)-y5*sin(A);
yr5=x5*sin(A)+y5*cos(A);
xr6=x6*cos(A)-y6*sin(A);
yr6=x6*sin(A)+y6*cos(A);
xr7=x7*cos(A)-y7*sin(A);
yr7=x7*sin(A)+y7*cos(A);
xr8=x8*cos(A)-y8*sin(A);
yr8=x8*sin(A)+y8*cos(A);
line(x1,y1,x2,y2);
line(x2,y2,x3,y3);
line(x3,y3,x4,y4);
line(x4,y4,x1,y1);
line(x5,y5,x6,y6);
line(x6,y6,x7,y7);
line(x7,y7,x8,y8);
line(x8,y8,x5,y5);
line(x1,y1,x5,y5);
line(x2,y2,x6,y6);
line(x3,y3,x7,y7);
line(x4,y4,x8,y8);
getch();
cleardevice();
line(xr1,yr1,xr2,yr2);
line(xr2,yr2,xr3,yr3);
line(xr3,yr3,xr4,yr4);
line(xr1,yr1,xr4,yr4);
line(xr5,yr5,xr6,yr6);
line(xr6,yr6,xr7,yr7);
line(xr7,yr7,xr8,yr8);
line(xr5,yr5,xr8,yr8);
line(xr1,yr1,xr5,yr5);
line(xr2,yr2,xr6,yr6);
line(xr3,yr3,xr7,yr7);
line(xr4,yr4,xr8,yr8);
}
void rotation_y()
{
cout<<"Enter the Angle of Rotation for y:"<<endl;
cin>>A;
xr1=x1*cos(A)+y1*sin(A);
yr1=-x1*sin(A)+y1*cos(A);
xr2=x2*cos(A)+y2*sin(A);
yr2=-x2*sin(A)+y2*cos(A);
xr3=x3*cos(A)+y3*sin(A);
yr3=-x3*sin(A)+y3*cos(A);
xr4=x4*cos(A)+y4*sin(A);
yr4=-x4*sin(A)+y4*cos(A);
xr5=x5*cos(A)+y5*sin(A);
yr5=-x5*sin(A)+y5*cos(A);
xr6=x6*cos(A)+y6*sin(A);
yr6=-x6*sin(A)+y6*cos(A);
xr7=x7*cos(A)+y7*sin(A);
yr7=-x7*sin(A)+y7*cos(A);
xr8=x8*cos(A)+y8*sin(A);
yr8=-x8*sin(A)+y8*cos(A);
line(x1,y1,x2,y2);
line(x2,y2,x3,y3);
line(x3,y3,x4,y4);
line(x4,y4,x1,y1);
line(x5,y5,x6,y6);
line(x6,y6,x7,y7);
line(x7,y7,x8,y8);
line(x8,y8,x5,y5);
line(x1,y1,x5,y5);
line(x2,y2,x6,y6);
line(x3,y3,x7,y7);
line(x4,y4,x8,y8);
getch();
cleardevice();
line(xr1,yr1,xr2,yr2);
line(xr2,yr2,xr3,yr3);
line(xr3,yr3,xr4,yr4);
line(xr1,yr1,xr4,yr4);
line(xr5,yr5,xr6,yr6);
line(xr6,yr6,xr7,yr7);
line(xr7,yr7,xr8,yr8);
line(xr5,yr5,xr8,yr8);
line(xr1,yr1,xr5,yr5);
line(xr2,yr2,xr6,yr6);
line(xr3,yr3,xr7,yr7);
line(xr4,yr4,xr8,yr8);
}
void rotation_z()
{
cout<<"Enter the Angle of Rotation for z:"<<endl;
cin>>A;
xr1=x1*cos(A)-y1*sin(A);
yr1=x1*sin(A)+y1*cos(A);
xr2=x2*cos(A)-y2*sin(A);
yr2=x2*sin(A)+y2*cos(A);
xr3=x3*cos(A)-y3*sin(A);
yr3=x3*sin(A)+y3*cos(A);
xr4=x4*cos(A)-y4*sin(A);
yr4=x4*sin(A)+y4*cos(A);
xr5=x5*cos(A)-y5*sin(A);
yr5=x5*sin(A)+y5*cos(A);
xr6=x6*cos(A)-y6*sin(A);
yr6=x6*sin(A)+y6*cos(A);
xr7=x7*cos(A)-y7*sin(A);
yr7=x7*sin(A)+y7*cos(A);
xr8=x8*cos(A)-y8*sin(A);
yr8=x8*sin(A)+y8*cos(A);
line(x1,y1,x2,y2);
line(x2,y2,x3,y3);
line(x3,y3,x4,y4);
line(x4,y4,x1,y1);
line(x5,y5,x6,y6);
line(x6,y6,x7,y7);
line(x7,y7,x8,y8);
line(x8,y8,x5,y5);
line(x1,y1,x5,y5);
line(x2,y2,x6,y6);
line(x3,y3,x7,y7);
line(x4,y4,x8,y8);
getch();
cleardevice();
line(xr1,yr1,xr2,yr2);
line(xr2,yr2,xr3,yr3);
line(xr3,yr3,xr4,yr4);
line(xr1,yr1,xr4,yr4);
line(xr5,yr5,xr6,yr6);
line(xr6,yr6,xr7,yr7);
line(xr7,yr7,xr8,yr8);
line(xr5,yr5,xr8,yr8);
line(xr1,yr1,xr5,yr5);
line(xr2,yr2,xr6,yr6);
line(xr3,yr3,xr7,yr7);
line(xr4,yr4,xr8,yr8);
}
};
int main()
{
trans t;
char ch;
int gd,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
do
{
cout <<"\nSelect:\n1. Insert\n2. Scaling\n3. Translation\n4. Rotation abt x\n5. Rotation abt y\n6. Rotation abt z\n0. Exit"<<endl;
cin>>ch;
switch(ch)
{
case '1':
t.insert();
break;
case '2':
t.scaling();
break;
case '3':
t.translation();
break;
case '4':
t.rotation_x();
break;
case '5':
t.rotation_y();
break;
case '6':
t.rotation_z();
break;
case '0':
break;
default:
cout<<"Incorrect Input\n";
break;
}
}
while(ch!=6);
getch();
closegraph();
return 0;
}