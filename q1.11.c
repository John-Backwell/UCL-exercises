#include <stdlib.h>
#include "graphics.h"
#include <math.h>

int main(void){
    float values[1080];
    float sin_values[1080];
    int i;
    for(i=0;i<1080;i++){
        values[i] = i;
        double x = (double)i;
        double pi_value = (x*M_PI/180);
        sin_values[i] = 50*sin(pi_value);
    }
    for(i=0;i<1079;i++){
        drawLine(values[i],sin_values[i]+100,values[i+1],sin_values[i+1]+100);
    }
    return 0;
}