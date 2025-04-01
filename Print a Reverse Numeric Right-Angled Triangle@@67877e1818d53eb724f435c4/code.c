// Your code here...

# include <stdio.h>

int main(){
    int row;
    scanf("%d", &row);

    for(int i = 0; i<row; i++){
        int fix = 1;
        for (int j = 0; j<row; j++){
            printf("%d ", fix++);
        }
        printf("\n");
    }
}