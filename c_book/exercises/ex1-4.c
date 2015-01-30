#include <stdio.h>
#include <stdlib.h>

int getnum(void);
#define ARRAYSIZE 10

main(){
    int count;
    int count1, count2;
    int temp;
    int ch_arr[ARRAYSIZE];

    count = 0;
    while (count < ARRAYSIZE){
        printf("Enter some numbers: ");
        ch_arr[count] = getnum();
        count = count + 1;
    }

    count1 = 0;
    while (count1 < ARRAYSIZE){
        count2 = count1 + 1;
//        printf("\tstarting outer while loop\n");
//        printf("\tcount1=%d, count2=%d\n", count1, count2);
        while (count2 < ARRAYSIZE){
//            printf("\t\tstarting inner while loop\n");
//            printf("\t\tcount1=%d, count2=%d\n", count1, count2);
//            printf("\t\tchecking (%d) < (%d)\n", ch_arr[count2], ch_arr[count1]);
            if (ch_arr[count2] < ch_arr[count1]){
//                printf("\t\t(%d) < (%d), swapping\n", ch_arr[count2], ch_arr[count1]);
                temp = ch_arr[count1];
                ch_arr[count1] = ch_arr[count2];
                ch_arr[count2] = temp;
//                printf("\t\tarr(%d) now %d\n", count1, ch_arr[count1]);
//                printf("\t\tarr(%d) now %d\n", count2, ch_arr[count2]);
            }
            else{
//                printf("\t\t(%d) >= (%d), continuing\n", ch_arr[count2], ch_arr[count1]);
            }
            count2 = count2 + 1;
//            printf("\t\tincrementing count2, now (%d)\n", count2);
//            printf("\t\tleaving inner while loop\n");
        }
        count1 = count1 + 1;
//        printf("\tincrementing count1, now (%d)\n", count1);
//        printf("\tleaving outer while loop\n\n");
    }
    count1 = 0;
    printf("\n\nSorted output:\n\n");
    while (count1 < ARRAYSIZE){
        printf("%d\n",ch_arr[count1]);
        count1 = count1 + 1;
        }
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




