#include "graphics.h"
#include <math.h>

int main(void) {
    int i;
    for(i=1;i<10;i++){
        drawOval(3*i,3*i,6*i,12*i);
    }
    return 0;
}