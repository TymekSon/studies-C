#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b;

    printf("Podaj warto�� a: ");
    scanf("%d", &a);
    printf("Podaj warto�� b: ");
    scanf("%d", &b);

    if(a > b){
        for(a; a >= b; a--){
            printf("%d ", a);
        }
    }
    else if(a == b){
        printf("a and b are equal");
    }
    else if(a < b){
        while(a <= b){
            printf("%d ", a);
            a ++;
        }
    }
    return 0;
}
