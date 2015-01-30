#include <stdio.h>
#include <stdlib.h>

/* print binary, decimal, and hexadecimal */

int getnum(void);

main(){
    int number;
    int bnum, dnum, hnum;
    int arr_bnum[32], arr_dnum[32], arr_hnum[32];
    int base, temp, remainder;
    int count, count1;
    
    printf("Enter a number: ");
    number = getnum();
    
// convert to binary
    base = 2;
    count = 0;
    remainder = 0;
    
    temp = number;
    while (temp > 0){
        bnum = temp;
        remainder = bnum % base;
//        printf("remainder: %d / %d = %d\n", bnum, base, remainder);
        arr_bnum[count] = remainder;
//        printf("digit =  %d in arr_bnum(%d)\n", arr_bnum[count], count);
        temp = bnum / base;
//        printf("temp: %d / %d = %d\n", bnum, base, temp);
        count = count + 1;
    }
   
    count1 = count - 1;
    printf("\nBinary: ");
    while (count1 >= 0){
        printf("%d", arr_bnum[count1]);
        count1 = count1 - 1;
    }
    printf("\n");

//convert to decimal
    base = 10;
    count = 0;
    remainder = 0;
    
    temp = number;
    while (temp > 0){
        dnum = temp;
        remainder = dnum % base;
//        printf("remainder: %d / %d = %d\n", dnum, base, remainder);
        arr_dnum[count] = remainder;
//        printf("digit =  %d in arr_dnum(%d)\n", arr_dnum[count], count);
        temp = dnum / base;
//        printf("temp: %d / %d = %d\n", dnum, base, temp);
        count = count + 1;
    }
   
    count1 = count - 1;
    printf("\nDecimal: ");
    while (count1 >= 0){
        printf("%d", arr_dnum[count1]);
        count1 = count1 - 1;
    }
    printf("\n");

//convert to hexadecimal
    base = 16;
    count = 0;
    remainder = 0;
    
    temp = number;
    while (temp > 0){
        hnum = temp;
        remainder = hnum % base;
//        printf("remainder: %d / %d = %d\n", hnum, base, remainder);
        arr_hnum[count] = remainder;
//        printf("digit =  %d in arr_hnum(%d)\n", arr_hnum[count], count);
        temp = hnum / base;
//        printf("temp: %d / %d = %d\n", hnum, base, temp);
        count = count + 1;
    }
   
    count1 = count - 1;
    printf("\nHexadecimal: ");
    while (count1 >= 0){
        
        if (arr_hnum[count1] < 10){
            printf("%d", arr_hnum[count1]);
        }
        else{
            arr_hnum[count1] = arr_hnum[count1] - 10 + 'A';
            printf("%c", arr_hnum[count1]);
        }
        count1 = count1 - 1;
    }
    printf("\n");

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
