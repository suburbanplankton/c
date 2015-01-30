#include <stdio.h>
#include <stdlib.h>

/* print binary, decimal, and hexadecimal */

int getnum();
int convert(int);

int arr_bnum[32];

int number;
int base;

main(){
    printf("Enter some numbers: ");
    number = getnum();
    
    base = 2;
    convert(base);
    base = 10;
    convert(base);
    //convert(16)

    exit(EXIT_SUCCESS);
}


convert(int, base){
    int count, count1;
    int temp, remainder;
    int bnum;
    
    count = 0;
    remainder = 0;
    
    temp = number;
    while (temp > 0){
        bnum = temp;
        remainder = bnum % base;
        printf("remainder: %d / %d = %d\n", bnum, base, remainder);
        arr_bnum[count] = remainder;
        printf("digit =  %d in arr_num(%d)\n", arr_bnum[count], count);
        temp = bnum / base;
        printf("temp: %d / %d = %d\n", bnum, base, temp);
        count = count + 1;
    }
   
    count1 = count - 1;
    printf("\nBinary: ");
    while (count1 >= 0){
        printf("%d", arr_bnum[count1]);
        count1 = count1 - 1;
    }
    printf("\n");
    



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
