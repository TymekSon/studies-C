#include <stdio.h>

void positive(){
    printf("You passed");
}

void negative(){
    printf("You didn't pass");
}

int main(){

    int points;

    do{
        printf("How many points did you score? ");
        scanf("%d", &points);

        points >=0 && <= 100 ? continue

        points >= 50 ? positive(); break : negative();
    }while()

    return 0;
}
