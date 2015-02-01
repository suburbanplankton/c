#include <stdio.h>
#include <stdlib.h>

#define DELTA   0.001
#define PI      3.141592

double pow(double, int);
unsigned int fact(int);
double sine(double), cosine(double);

/*
 *  * sin x = x - pow(x,3)/fact(3) + pow(x,5)/fact(5)...
 *   * cos x = 1 - pow(x,2)/fact(2) + pow(x,4)/fact(4)...
 *   */

main(){
    double n;

    n = 0;
    for(n = 0; n <= PI; n += PI/16){
        printf("val: %f\tsine: %f\tcosine: %f\n", n, sine(n), cosine(n));
    }
    exit(EXIT_SUCCESS);
}

double sine(double x){
    unsigned int count;
    double thisterm, lastterm, diff;
    int sign;

    count = 3;
    sign = -1;
    thisterm = x;

    do{
        lastterm = thisterm;
        thisterm = lastterm + (sign * pow(x, count) / fact(count));
        sign = -sign;
        count +=2;
        diff = thisterm - lastterm;
        if (diff < 0)
            diff = -diff;
    }while(diff > DELTA);

    return(thisterm);
}

double cosine(double x){
    unsigned int count;
    double thisterm, lastterm, diff;
    int sign;

    count = 2;
    sign = -1;
    thisterm = 1;

    do{
        lastterm = thisterm;
        thisterm = lastterm + (sign * ((pow(x, count) / fact(count))));
        sign = -sign;
        count +=2;
        diff = thisterm - lastterm;
        if (diff < 0)
            diff = -diff;
    }while(diff > DELTA);

    return(thisterm);
}

double pow(double x, int y){
    double result;
    result = 1;
    while(y){
        result *= x;
        y--;
    }
    return(result);
}

unsigned int fact(int x){
    unsigned int result;
    result = 1;
    while (x > 1){
        result *= x;
        x--;
    }
    return(result);
}

