#include <stdio.h>
#include <stdlib.h>

int main(){
    int luckyNumbers[] = {5, 10, 15, 20};
    luckyNumbers[3] = 200;

    printf("%d \n", luckyNumbers[0]);
    printf("%d \n", luckyNumbers[1]);
    printf("%d \n", luckyNumbers[2]);
    printf("%d \n", luckyNumbers[3]);
    
    return 0;
}