// Your code here...

# include <stdio.h>

int main(){
    int row, num;
    scanf("%d", &row);

    num = row;

    for(int i = 0; i<row; i++){
        int fix = 1;
        for (int j = 0; j<row; j++){
            printf("%d ", fix++);
            num --;
        }
        printf("\n");
    }
}