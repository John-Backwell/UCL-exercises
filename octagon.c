#include "graphics.h"
#include <math.h>



int main(void) {
    int i;
    int flat_add = 100;
    int length = 100;
    for(i = 1; i<9;i++){
        drawLine((length*(cos((2*i*M_PI)/8)))+flat_add,(length*(sin((2*i*M_PI)/8)))+flat_add,
                 (length*(cos((2*(i+1)*M_PI)/8)))+flat_add,(length*(sin((2*(i+1)*M_PI)/8)))+flat_add);
    }
    return 0;
}
