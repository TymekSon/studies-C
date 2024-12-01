#include <stdio.h>

int main(){

    int points;

    printf("How many points did you score?");
    scanf("%d", &points);

    points >= 50 ? "zaliczony" : "niezaliczony";

    return 0;
}