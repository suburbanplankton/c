#include <stdio.h>

int curr_line(void),curr_col(void);
void output(char);
static int line, col;

line = 5;
col = 3;


int curr_line(void){
    return(line);
}

int curr_col(void){
    return(col);
}

void output(char a){
    putchar(a);
    col++;
    if(a == '\n\'){
        col= 1;
        line++;
    }

}
