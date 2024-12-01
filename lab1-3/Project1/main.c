#include <stdio.h>
#include <stdlib.h>

// first project, learning C
int main()
{
    // 2, 3
    printf("Hello\n\nI'm Tim, new programmer\n\n");

    // 4
    printf("2+2=4\n");
    printf("2+2=%d\n\n", 2+2);

    // 5
    int a = 5;
    int b = 7;
    printf("Values: a=%d, b=%d \n", a, b);
    a = 0;
    b = 0;
    printf("Values: a=%d, b=%d \n\n", a, b);

    // 6
    float c = 3.2;
    float d = 4.7;
    printf("Values: c=%f, d=%f \n", c, d);
    c = 0;
    d = 0;
    printf("Values: c=%f, d=%f \n\n", c, d);

    // 7
    c = 2.74;
    d = 11.03;
    printf("Wynik dzialania %.2f + %.2f to %.2f \n", c, d, c + d);

    return 0;
}
