 #include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
void algorithm(int ,int ,int ,int);
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
int x1,y1,x2,y2;
cout<<"Enter x1 and y1 cordinate";
cin>>x1>>y1;
cout<<"Enter x2 and y2 cordinate";
cin>>x2>>y2;
algorithm(x1,y1,x2,y2);
getch();
closegraph();
}

void algorithm (int x1,int y1,int x2,int y2)
{
int x,y,dx,dy,p;
x=x1;
y=y1;
dx=x2-x1;
dy=y2-y1;
p=2*dy-dx;
while(x<=x2)
{
delay(500);
putpixel(x,y,14);
x++;
if(p<0)
p=p+2*dy;
else
{
p=p+2*dy-2*dx;
y++;
} } }