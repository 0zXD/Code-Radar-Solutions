// Your code here...

#include <stdio.h>

int main(){
    int row; 
    scanf("%d", &row);

    for (int i =0; i<row; i++){
        char let = 'A';
        for(int j = 0; j<=i; j++){
            printf("%c", let++);
        }
        printf("\n");
    }
}