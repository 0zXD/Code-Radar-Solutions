// Your code here...

#include <stdio.h>

int main(){
    int main(){
        int rows, space;
        scanf("%d", &rows);

        space = rows-1; 

        for (int i =0; i< rows; i++){
            for (int j = 0; j < space; j++){
                printf(" ");
            }
            for (int a = 0; a <= i; a++){
                printf("*");
            }
            for (int b = 0; b < i; b++){
                printf("*");
            }
            printf("\n");
        }
    }
}