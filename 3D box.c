#include<stdio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\tc\\bgi");
bar3d(250,200,350,300,100,100);
getch();
closegraph();
}
