#include <stdio.h>
#include <stdlib.h>

int main() {
    char color[20];
    char noun[20];
    char word[20];

    printf("Enter a color: ");
    scanf("%s", color);
    printf("Enter a noun: ");
    scanf("%s", noun);
    printf("Enter a word: ");
    scanf("%s", word);


    printf("Roses are %s\n", color);
    printf("%s are blue\n", noun);
    printf("I love %s\n", word);

    return 0;
}
