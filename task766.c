#include <stdio.h>

int main(){

    int N = 0, 
        M = 0,
        K = 0;

    scanf("%d%d%d", &N, &M, &K);

    if (N * M < K){
        printf("%s", "NO\n");
    }

    else if ((N * M > K)||(N * M == K)){
        printf("%s", "YES\n");
    }
    
}
