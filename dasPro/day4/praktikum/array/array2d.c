#include <stdio.h>
#include <string.h>


int main() {
    int n;

    scanf("%d", &n);

    char arr_of_str[n][51];

    for(int i=0; i<n; i++){
        scanf("%s", arr_of_str[i]);
    }

    for(int i=0; i<n; i++){
        printf("%s\n", arr_of_str[i]);
    }

    return 0;
}
