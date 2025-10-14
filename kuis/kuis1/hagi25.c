#include <stdio.h>

typedef struct{
    float num;
    int depan;
    int belakang;
    int bagi;
}box;

int main(){
    box a, b, c;
    scanf("%f", &a.num);
    scanf("%f", &b.num);
    scanf("%f", &c.num);

    a.depan = a.num;
    a.belakang = (int)(a.num*100) %100;
    a.bagi = a.depan/a.belakang;
    b.depan = b.num;
    b.belakang = (int)(b.num*100) %100;
    b.bagi = b.depan/b.belakang;
    c.depan = c.num;
    c.belakang = (int)(c.num*100) %100;
    c.bagi = c.depan/c.belakang;

    printf("float: %.2f\n", a.num);
    printf("depan : %d\n", a.depan);
    printf("belakang: %d\n", a.belakang);
    printf("bagi : %d\n",a.bagi);
    printf("\n");
    printf("float: %.2f\n", b.num);
    printf("depan : %d\n", b.depan);
    printf("belakang: %d\n", b.belakang);
    printf("bagi : %d\n",b.bagi);
    printf("\n");
    printf("float: %.2f\n", c.num);
    printf("depan : %d\n", c.depan);
    printf("belakang: %d\n", c.belakang);
    printf("bagi : %d\n",c.bagi);
    printf("\n");
    
    if(a.bagi > b.bagi && a.bagi > c.bagi){ // case, a paling besar
        printf("nilai bagi terbesar: %d\n", a.bagi);
    }else if(b.bagi > a.bagi && b.bagi > c.bagi){// case, b paling besar
        printf("nilai bagi terbesar: %d\n", b.bagi);
    }else if(c.bagi > a.bagi && c.bagi > b.bagi){// case, c paling besar
        printf("nilai bagi terbesar: %d\n", c.bagi);
    }
    

    return 0;
}