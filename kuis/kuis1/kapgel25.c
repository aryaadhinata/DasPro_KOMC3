#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    // segmen 1
    for(int b = 1; b <= n*5-2; b++){
        for(int k = 1; k <= n*8; k++) printf(" ");
        for(int k = 1; k <= b; k++) printf("*");
        printf("\n");
    }

    // segmen 2
    for(int b = 1; b <= n; b++){
        for(int k = n-1; k >= b; k--) printf(" ");
        for(int k = 1; k <= b; k++) printf("*");
        for(int k = 1; k <= n*7; k++) printf(" ");
        for(int k = 1; k <= n*5-2+b; k++) printf("*");
        for(int k = n*3 + 1; k >= b; k--) printf(" ");
        for(int k = 1; k <= b; k++) printf("*");
        printf("\n");
    }

    // segmen 3
    for(int b = 1; b <= n; b++){
        for(int k = 1; k <= n+b; k++) printf("*");
        for(int k = n*7-1; k >= b; k--) printf(" ");
        for(int k = 1; k <= n*6-2+b; k++) printf("*");
        for(int k = n*2 + 1; k >= b; k--) printf(" ");
        for(int k = 1; k <= b; k++) printf("*");
        printf("\n");
    }

    // segmen 4
    for(int b = 1; b <= n; b++){
        for(int k = 1; k <= b-1; k++) printf(" ");
        for(int k = n; k >= b; k--) printf("*");
        for(int k = 1; k <= n*13-1; k++) printf("*");
        for(int k = n; k >= b; k--) printf("*");
        for(int k = 1; k <= n; k++) printf(" ");
        for(int k = 1; k <= n; k++) printf("*");
        printf("\n");
    }

    // segmen 5
    for(int b = 1; b <= n; b++){
        for(int k = 1; k <= n-1+b; k++) printf(" ");
        for(int k = n; k >= b; k--) printf("*");
        for(int k = 1; k <= n*13; k++) printf("*");
        for(int k = n; k >= b; k--) printf("*");
        printf("\n");
    }
    return 0;
}