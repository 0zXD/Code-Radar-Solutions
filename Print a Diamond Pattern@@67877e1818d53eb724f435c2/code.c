// Your code here...

#include <stdio.h>

int main(){
    int rows, space, stars;
    scanf("%d", &rows);

    space = rows-1; 
    stars = rows-1;

    for (int i =0; i< rows; i++){
        for (int j = 0; j < space; j++){
            printf(" ");
        }
        space --;
        for (int a = 0; a <= (2i-1); a++){
            printf("*");
        }
        printf("\n");
    }
    
    for (int j =0; j< rows-1; j++){
        for (int x = 0; x < j+1; x++){
            printf(" ");
        }
        for (int x = 0; x < stars ; x++){
            printf("*");
        }
        for (int x = 0; x < stars-1 ; x++){
            printf("*");
        }
        stars--;
        printf("\n");
    }


}
