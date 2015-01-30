/*
*
* Dumb program that generates prime numbers.
*/
#include <stdio.h>
#include <stdlib.h>

main(){
    int this_number, divisor, not_prime;
    int first_prime, second_prime;

    this_number = 3;

    first_prime = this_number;

    while(this_number < 10000){
        divisor = this_number / 2;
        not_prime = 0;
        while(divisor > 1){
            if(this_number % divisor == 0){
                not_prime = 1;
                divisor = 0;
            }
            else{
                divisor = divisor-1;
            }
        }

        if(not_prime == 0){          //this is a prime number
            second_prime = this_number;
            if ( second_prime - first_prime == 2){
                printf("%d and %d are prime pairs\n", first_prime, second_prime);
            }
            first_prime = this_number;
        }
        this_number = this_number + 1;
    }
    exit(EXIT_SUCCESS);
}
