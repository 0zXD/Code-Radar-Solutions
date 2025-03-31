// Your code here...

#include <stdio.h> 

int main(){
    int n, space;
    scanf("%d",&n );

    space = n-1;

    for (int i=0; i<n; i++){
        for (int j = 0; j<space, j++){
            printf(" ");
        }
        space--;
        for (int a = 0; a <=i; a++){
            printf("*");
        }
        printf("\n");
    }
}