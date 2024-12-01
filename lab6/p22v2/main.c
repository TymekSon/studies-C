#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void circle(){
    float r;
    system("cls");
    printf("Podaj promien: ");
    scanf("%f", &r);
    printf("Pole kola:         %f\n\n", M_PI*pow(r, 2));
}

void square(){
    float a;
    system("cls");
    printf("Podaj bok: ");
    scanf("%f", &a);
    printf("Pole kwadratu:     %f\n\n", pow(a, 2));
}

void rectangle(){
    float a, b;
    system("cls");
    printf("Podaj bok 1: ");
    scanf("%f", &a);
    printf("Podaj bok 2: ");
    scanf("%f", &b);
    printf("Pole prostokata:   %f\n\n", a*b);
}

void triangle(){
    float a, h;
    system("cls");
    printf("Podaj podstawe: ");
    scanf("%f", &a);
    printf("Podaj wysokoœæ: ");
    scanf("%f", &h);
    printf("Pole trojkata:     %f\n\n", (a*h)/2);
}

void menu(){
    printf("Oblicz pole: \n1.kola\n2.kwadratu\n3.prostokata\n4.trojkata\n5.exit\n");
}

int main()
{
    int choice;

    do{
        menu();
        scanf("%d", &choice);

        if(choice == 1){
            circle();
        }
        else if(choice == 2){
            square();
        }
        else if(choice == 3){
            rectangle();
        }
        else if(choice == 4){
            triangle();
        }
        else if(choice == 5){
            continue;
        }
        else{
            printf("Niepoprawny zakres wyboru");
        }
    }while(choice != 5);

    return 0;
}
