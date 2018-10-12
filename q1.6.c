#include "graphics.h"
#include <math.h>

int main(void){
    double x = sqrt(2.0);
    drawArc(30,30,100,100,0,360);
    drawRect(80-25*x,80-25*x,50*x,50*x);
    return 0;
}