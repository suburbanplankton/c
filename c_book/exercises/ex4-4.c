#include <stdio.h>
#include <stdlib.h>

void print_number(void);

main(){
    print_number();
    exit(EXIT_SUCCESS);
}


void print_number(){
    static int num = 0;
    num++;
    if (num < 100)
        print_number();
    printf("%d\n", num);
    num--;
}
