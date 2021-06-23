/*
    developed by yohannes kassa yimam
    on 5-26-2019
    class assignment and lab exercises
*/
#include <iostream>
#include <graphics.h>
using namespace std;

int main()
{
    int gd=DETECT,gm;
    detectgraph(&gd,&gm);
    initgraph(&gd,&gm,"");



        // car drowing

    for(int i = 0, c=1 ; i<getmaxx();i++){

            setcolor(YELLOW);
            circle(150,100,50);
            outtextxy(535,230,"car");
            setcolor(5);
            line(500,250,600,250);
            setcolor(WHITE);
             line(550,250,550,380);// pole
              line(0,380,getmaxx(),380);// road
        setcolor(c);
        line(50+i,300,150+i,300);// car roof
        line(50+i,300,50+i,360);// car back
        line(50+i,360,200+i,360);//car bottom
        line(150+i,300,175+i,330);// car glass
        line(175+i,330,200+i,330);// car cofen
         line(50+i,330,200+i,330);// car window
         line(100+i,300,100+i,330);// car glass partition
        line(150+i,300,150+i,330);// car glass partition
        line(200+i,330,200+i,360);// car light

        //goma
        circle(75+i,370,10); // back
         circle(175+i,370,10);
        delay(05);

        if(i==getmaxx()-300){
            outtextxy(100,100,"press space for car start again");
            i=0;
            c++;
            if(c==15){
                c=0;
            }
            getch();
        }
        cleardevice();
    }
    getch();
    closegraph();
    return 0;
}
