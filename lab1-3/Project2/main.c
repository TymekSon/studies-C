#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    /*

    //1
    int liczba1 = 0;
    int liczba2 = 0;

    printf("insert first value: ");
    scanf("%d", &liczba1);

    printf("insert second value: ");
    scanf("%d", &liczba2);

    printf("%d + %d = %d \n", liczba1, liczba2, (liczba1+liczba2));

    //2
    float liczbar1 = 0;
    float liczbar2 = 0;

    printf("insert first value: ");
    scanf("%f", &liczbar1);

    printf("insert second value: ");
    scanf("%f", &liczbar2);

    printf("%f + %f = %f \n", liczbar1, liczbar2, (liczbar1+liczbar2));

    */

    char imie;
    printf("Podaj imie: ");
    scanf("%s", &imie);
    printf("Twoje imie: %s", imie);

    //4
    float a = 0;
    float b = 0;

    printf("Podaj bok a: ");
    scanf("%f", &a);

    printf("Podaj bok b: ");
    scanf("%f", &b);

    printf("Pole prostokata o bokach %f i %f = %f \n\n", a, b, a*b);

    //5
    float r = 0;

    printf("Radius: ");
    scanf("%f", &r);

    float pole = r*r*M_PI;
    float obw = 2*M_PI*r;

    printf("Pole: %f \n", pole);
    printf("Obwod: %f", obw);

    return 0;

}
