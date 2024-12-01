#include <stdio.h>
#include <stdlib.h>

int main(){

    float array[4];

    for(int i = 0; i < 3; i++){
        scanf("%f ", &array[i]);
    }

    for(int i = 0; i < 4; i++){
        printf("wartosc %d = %f i znajduje sie w komorce nr. %d pod adresem: %p\n", i+1, array[i], i, &array[i]);
    }

    return 0;
}
