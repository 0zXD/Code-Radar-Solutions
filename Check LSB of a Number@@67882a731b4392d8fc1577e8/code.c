// Your code here...

#include <stdio.h>

int main() {
    int a, b =1;
    scanf("%d", &a);

    if ((a & b) == 1) {
        printf("Set");
    }
    else {
        printf("Not Set");
    }
}