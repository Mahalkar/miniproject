#include<stdio.h>
#include<graphics.h>
#include<conio.h>
void main()
{
 int gd = DETECT ,gm;
 int x=300,i=0,y=190,start_angle=0,end_angle=360,x_rad=150,y_rad=50;
 initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
 for(i=0;i<=300;i--){
 ellipse(x,y,start_angle,end_angle,x_rad,i+y_rad);
 circle(300,190,40);
 setfillstyle(SOLID_FILL,RED);
 floodfill(300,190,WHITE);
 circle(300,190,10);
 setfillstyle(SOLID_FILL,BLACK);
 floodfill(300,190,WHITE);
 delay(200);
 }
 getch();
 }