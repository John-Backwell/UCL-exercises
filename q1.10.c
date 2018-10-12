#include <stdlib.h>
#include "graphics.h"
#include <math.h>

//void draw_bar_chart(int top_left_x_pos,int top_left_y_pos,int height,int width){
//    drawLine(top_left_x_pos,top_left_y_pos,top_left_x_pos+width,top_left_y_pos+height);
//
//
//}
//
//void draw_series_of_rects(int num_rects,int top_leftx,int top_lefty,int width,int height)
//    int i;
//    for(i=0;i<num_rects;i++){
//        int random = rand() %10;
//
//        drawRect(top_leftx+(i*width),top_lefty+random,width,height-random);
//    }
//
//}

int main(void){
    drawLine(20,20,20,200);
    drawLine(20,200,200,200);
    setColour(blue);
    fillRect(20,100,30,100);
    setColour(green);
    fillRect(50,80,30,120);
    setColour(yellow);
    fillRect(80,150,30,50);
    setColour(red);
    fillRect(110,70,30,130);
    setColour(black);
    drawString("A",30,215);
    drawString("B",60,215);
    drawString("C",90,215);
    drawString("D",120,215);
    drawLine(20,200,10,200);
    drawLine(20,150,10,150);
    drawLine(20,100,10,100);
    drawLine(20,50,10,50);
    drawString("10",2,200);
    drawString("20",2,150);
    drawString("30",2,100);
    drawString("40",2,50);
    return 0;
}