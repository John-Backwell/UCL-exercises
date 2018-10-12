#include <stdio.h>
#include <math.h>
#include "graphics.h"

//question 11(a)
void print_sq(int range){
    for(int i = 1; i < range+1;i ++){
        printf("%d*%d = %d", i,i,i*i);
        printf("\n");
    }
}
//question 11(b)
void print_even_sq(int range){
    for(int i = 1; i < range +1;i++)
        if (i % 2 == 0){
            printf("%d*%d = %d", i,i,i*i);
            printf("\n");
        }
}


//question 11(c)

int is_prime(int num){
    int flag = 1;
    for (int i = 2;i<num;i++){
        if(num % i == 0){
            flag = 0;
        }
    }
    return flag;
}

void print_primes(int range){

    for(int i = 2;i < range+1;i++){
        if(is_prime(i)==1){
            printf("%d is a prime number!",i);
            printf("\n");
        }
    }
}

void draw_char_rect(int sizex,int sizey, char symbol){
    char character = symbol;
    for (int i = 0; i <sizey ; i++) {
        for (int j = 0; j <sizex ; j++) {
            printf("%c",character);
        }
        printf("\n");
    }

}

int main()
{
/*    int i = 1;
    int value = 13;
    while(i<14){
        printf("%d * %d = %d",i,value,i*value);
        printf("\n");
        i= i+1;
    }

    int count;
    for(count =1;count<14;count++){
        printf("%d * %d = %d",count,value,count*value);
        printf("\n");
    }

    int do_counter = 1;
    do{
        printf("%d * %d = %d",do_counter,value,do_counter*value);
        printf("\n");
    } while(++do_counter<14);


//question 2.4
    int row;
    for(row = 0;row<4;row++){
       int column;
       for(column = 0;column<5;column++){
           if ((row == 1 || row == 2) && (column == 1 || column == 2 || column ==3)) {
               printf(" ");
           }
           else{
               printf("*");
           }

       }
       printf("\n");
    }

//question2.5
    for(row =0;row<6;row++){
        int column;
        for (column =0;column<6;column++){
            if(row>=1 && column < row){
                printf(" ");
            }
            else{
                printf("*");
            }
        }
        printf("\n");
    }

//question 2.6
    for(row=0;row<5;row++){
        int column;
        for(column=0;column<9;column++){
            if (column>=row && column<=row+4 ) {
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }

    for(row=0;row<4;row++){
        int column;
        for(column=0;column<9;column++){
            if (column>=3-row && column<=7-row ) {
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }

//question 2.7
    for(row =0;row<7;row++){
        int column;
        for (column =0;column<8;column++){
            if (row == 0 || row == 6){
                printf("*");
            }
            else if((row>0 && row <6) && (column == 0 || column == 7)){
                printf("*");
            }
            else if((row == 2 || row == 4) && (column > 1 && column < 6)){
                printf("#");
            }
            else if((row == 3)&& (column==2 || column == 5)){
                printf("#");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }*/

//question 2.8
/*    for(int row = 0; row<6;row++){
        for(int column = 0; column<6; column++){
            if(row % 2 == 0){
                if(column % 2 == 0){
                    printf("*");
                }
                else{
                    printf("#");
                }
            }
            else{
                if(column % 2 == 0){
                    printf("#");
                }
                else{
                    printf("*");
                }
            }
        }
        printf("\n");
    }*/

//question 2.9
/*
    for(int row =0;row <9;row ++){
        for(int column =0; column<5;column++){
            if(column == 0 || column == row || column == 8-row){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
*/

//question 2.10
/*    for(int row =0;row <8;row ++){
        for(int column =0; column<7;column++){
            if(row == 0 || row == column ||(column == 6 && row != 7)){
                printf("*");
            }
            else if(column == row-1|| row == 7 ||(column == 0 && row !=1)){
                printf("#");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }*/

//question 2.12
 /*   float xvalues[1080];
    float sin_values[1080];
    float cos_values[1080];
    float tan_values[1080];
    int i;
    for(i=0;i<1080;i++){
        xvalues[i] = i;
        double x = (double)i;
        double pi_value = (x*M_PI/180);
        sin_values[i] = 100*sin(pi_value);
        cos_values[i] = 100*cos(pi_value);
        tan_values[i] = 100*tan(pi_value);
    }
    for(i=0;i<1079;i++){
        setColour(red);
        drawLine(xvalues[i],sin_values[i]+150,xvalues[i+1],sin_values[i+1]+150);
        setColour(blue);
        drawLine(xvalues[i],cos_values[i]+150,xvalues[i+1],cos_values[i+1]+150);
        setColour(green);
        if(tan_values[i]< 150 && tan_values[i] > -150 ){
            drawLine(xvalues[i],tan_values[i]+150,xvalues[i+1],tan_values[i+1]+150);
        }

    }
    setColour(black);
    drawLine(180,0,180,300);
    drawLine(0,150,1000,150);
    drawString("X",500,140);
    */
    draw_char_rect(5,5,"#");
    return 0;
}
