#include <stdio.h>

int main(){
    int a, b, c;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if(a >= b && a >= c && b >= c){
        printf("%d %d %d\n", a, b, c);
    }else if(a >= b && a >= c && c >= b){
        printf("%d %d %d\n", a, c, b);
    }else if(b >= a && b >= c && a >= c){
        printf("%d %d %d\n", b, a, c);
    }else if(b >= a && b >= c && c >= a){
        printf("%d %d %d\n", b, c, a);
    }else if(c >= a && c >= b && a >= b){
        printf("%d %d %d\n", c, a, b);
    }else if(a >= a && c >= b && b >= a){
        printf("%d %d %d\n", c, b, a);
    }
    return 0;
}
