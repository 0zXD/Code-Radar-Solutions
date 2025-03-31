// Your code here...

#include <stdio.h>

int main() {
    int rows;
    scanf("%d", &rows);
    
    for (int i = 0; i<rows; i++){
        if (i == 0 || i == rows-1 ) {
            for (int j = 0; j<rows; j++){
                printf("*");
            }
        }
        else {
            for (int j = 0; j<rows; j++){
                if (j == 0 || j == rows-1 ){
                    printf("*");
                }
                else {
                    printf(" ");
                }
            }
        }
        
        printf("\n");
    }
    

    return 0;
}