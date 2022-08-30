#include <stdio.h>

int main(){

    int a = 0, 
        b = 0,
        a1 = 0,
        a2 = 0,
        a3 = 0,
        a4 = 0,
        b1 = 0,
        b2 = 0,
        b3 = 0,
        b4 = 0;

    scanf("%d%d%d%d%d%d%d%d", &a1, &b1, &a2, &b2, &a3, &b3, &a4, &b4);

    a = a1 + a2 + a3 + a4;
    b = b1 + b2 + b3 + b4;

    if (a > b){
        printf("%d%s", 1, "\n");
    }

    else if (a < b){
        printf("%d%s", 2, "\n");
    }

    else if (a == b){
        printf("%s", "DRAW\n");
    }

}
