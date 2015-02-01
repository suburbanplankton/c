#include <stdio.h>
#include <stdlib.h>

#define PI 3.141592
#define INCREMENT (PI/16)
#define DELTA .0001

double sine(double), cosine(double);
static unsigned int fact(unsigned int n);
static double pow(double x, unsigned int n);

main(){
  double arg = 0;

  for(arg = 0; arg <= PI; arg += INCREMENT){
    printf("value %f\tsine %f\tcosine %f\n", arg, sine(arg), cosine(arg));
  }
  exit(EXIT_SUCCESS);
}

static unsigned int
fact(unsigned int n){
  unsigned int answer;

  answer = 1;
  while(n > 1)
    answer *= n--;

  return(answer);
}

static double
pow(double x, unsigned int n){
  double answer;

  answer = 1;
  while(n){
    answer *= x;
    n--;
  }
  return(answer);
}

double
sine(double x){
  double difference, thisval, lastval;
  unsigned int term;
  int sign;

  sign = -1;
  term = 3;

  thisval = x;
  do{
    lastval = thisval;
    thisval = lastval + pow(x, term)/fact(term) * sign;
    term += 2;
    sign = -sign;
    difference = thisval - lastval;
    if(difference < 0)
      difference = -difference;
    }while(difference > DELTA && term < 16);

  return(thisval);
}

double
cosine(double x){
double difference, thisval, lastval;
  unsigned int term;
  int sign;

  sign = -1;
  term = 2;

  thisval = 1;
  do{
    lastval = thisval;
    thisval = lastval + pow(x, term)/fact(term)  * sign;
    term += 2;
    sign = -sign;
    difference = thisval - lastval;
    if(difference < 0)
      difference = -difference;
  }while(difference > DELTA && term < 16);

  return(thisval);
}

