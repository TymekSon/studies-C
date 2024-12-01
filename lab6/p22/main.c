#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double circle(double r){
    return M_PI*pow(r, 2);
}

double square(double a){
    return pow(a, 2);
}

double rectangle(double a, double b){
    return a*b;
}

double triangle(double a, double h){
    return (a*h)/2;
}

void menu(){
    printf("Oblicz pole: \n1.kola\n2.kwadratu\n3.prostokata\n4.trojkata\n5.exit\n");
}

int main()
{
    int choice;
    do{
        float r, a, b, h;
        menu();
        scanf("%d", &choice);

        if(choice == 1){
            system("cls");
            printf("Podaj promien: ");
            scanf("%f", &r);
            printf("Pole kola:         %f\n\n", circle(r));
        }
        else if(choice == 2){
            system("cls");
            printf("Podaj bok: ");
            scanf("%f", &a);
            printf("Pole kwadratu:     %f\n\n", square(a));
        }
        else if(choice == 3){
            system("cls");
            printf("Podaj bok 1: ");
            scanf("%f", &a);
            printf("Podaj bok 2: ");
            scanf("%f", &b);
            printf("Pole prostokata:   %f\n\n", rectangle(a, b));
        }
        else if(choice == 4){
            system("cls");
            printf("Podaj podstawe: ");
            scanf("%f", &a);
            printf("Podaj wysokoœæ: ");
            scanf("%f", &h);
            printf("Pole trojkata:     %f\n\n", triangle(a, h));
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
