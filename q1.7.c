#include "graphics.h"
#include <math.h>

int main(void) {
    int i;
    for (i = 0; i < 6; i++) {
        drawLine(50, 50 + (i * 25), 350, 50 + (i * 25));
    }
    drawRect(50, 50, 300, 250);
    drawRect(150, 250, 100, 100);
    for (i = 0;i <5;i++){
        drawLine(50+(i*60),50,50+(i*60),175);
    }
    drawString("CS Department",150,240);
    return 0;
}