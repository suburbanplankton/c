#include <stdio.h>
#include <stdlib.h>

int getnum(void);

main(){
    printf("Enter some numbers: ");
    printf("\nTotal value: %d\n", getnum());
    exit(EXIT_SUCCESS);
}

getnum(){
    int ch;
    int total;

    total = 0;

    ch = getchar();
    while(ch != '\n'){
        total = 10*total + ch - '0';
//        printf("ch was %c\n", ch);
//        printf("total is %d\n", total);
        ch = getchar();
    }
    return (total);
}
