#include <stdio.h>

int max_three(int a, int b, int c, int * max){

    int maxi = a;
    
    if (b > maxi){
        maxi = b;
    }
    if (c > maxi){
        maxi = c;
    }
    *max = maxi;

}

int min_three(int a, int b, int c, int * min){

    int mini = a;

    if (b < mini){
        mini = b;
    }
    if (c < mini){
        mini = c;
    }
    *min = mini;

}


int main(){

    int a = 0, 
        b = 0,
        c = 0;
    int max = 0, min = 0;

    scanf("%d%d%d", &a, &b, &c);
    
    max_three(a, b, c, &max);
    min_three(a, b, c, &min);

    printf("%d%s", max-min, "\n");
}





