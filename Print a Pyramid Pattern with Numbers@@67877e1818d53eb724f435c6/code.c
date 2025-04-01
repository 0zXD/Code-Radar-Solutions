// Your code here...

#include <stdio.h>

int main(){
    int row;
    scanf("%d", &row);

    for(int i = 1; i<= row; i++){
        int num = 1;
        for(int j = 0; j<row -i; j++){
            printf(" ");
        }
        for(int b =0; b<row; b++){
            printf("%d ", num++);
        }
        printf("\n");
    }
}