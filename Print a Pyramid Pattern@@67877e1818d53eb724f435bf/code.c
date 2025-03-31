// Your code here...


#include <stdio.h>

int main() {
    int rows, space, star;
    scanf("%d", &rows);

    star = rows; 

    for (int i = 0; i < rows; i++){
        for (int j = rows-1; j >0; j--){
            printf(" "); 
        }

        for (int j = 0; j <= i; j++) {
            printf("* ");
        }

        for (int j = 0; j < i; j++) {
            printf("* ");
        }
    }
}