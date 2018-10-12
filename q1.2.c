#include <stdio.h>
#include <string.h>

int main(void) {
    char myName[] = "Dept. of Computer Science ";
    char address_line_1[] = "Malet Place Engineering Building";
    char address_line_2[] = "London";
    printf("Hello, my name is %s\n", myName);
    int index = strlen(myName) - 1;
    while (index > -1) {
        printf("%c", myName[index]);
        index = index - 1;
    }
    int index2 = strlen(address_line_1);
    printf("\n");
    while (index2 > -1) {
        printf("%c", address_line_1[index2]);
        index2 = index2 - 1;
    }
    int index3 = strlen(address_line_2);
    printf("\n");
    while (index3 > -1) {
        printf("%c", address_line_2[index3]);
        index3 = index3 - 1;
    }
    printf("\n");
    return 0;
}