// Your code here...

#include <stdio.h>

int main(){
    int rows, space, stars;
    scanf("%d", &rows);

    space = rows-1; 
    stars = rows-1;

    for (int i =1; i<= rows; i++){
        for (int j = 0; j < space; j++){
            printf(" ");
        }
        space --;
        for (int a = 1; a <= (2*i)-1; a++){
            printf("*");
        }
        printf("\n");
    }
    
    for (int j =1; j<= rows-1; j++){
        for (int x = 0; x < j+1; x++){
            printf(" ");
        }
        for (int x = (2*j) -1; x >0 ; x--){
            printf("*");
        }
        printf("\n");
    }


}
