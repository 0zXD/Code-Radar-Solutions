// Your code here...


#include <stdio.h>

int main() {
    int rows, space;
    scanf("%d", &rows);
    space = rows - 1;

    for (int i = 0; i < rows; i++){
        for (int j = 0; j < space; j++){
            printf(" ");
        }
        space--;

        for (int j = 0; j <= i; j++) {
            printf("*");
        }

        for (int j = 0; j < i; j++) {
            printf("*");
        }

        printf("\n");
    }
}