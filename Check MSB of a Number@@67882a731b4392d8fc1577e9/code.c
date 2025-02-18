// Your code here...

#include <stdio.h>

int main() {
    int num, x;
    scanf("%d", &num);

    x = num << 31;

    if ((x & 1 ) ==1){
        printf("Set");
    }
    else {
        printf("Not Set");
    } 
    
    return 0;
}