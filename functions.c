#include <stdio.h>
#include <stdlib.h>

int main() {
    sayHello("Mike", 23);
    return 0;
}

void sayHello(char name[], int age){
    printf("Hello %s, you are %d\n", name, age);
}