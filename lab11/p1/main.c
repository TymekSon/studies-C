#include <stdio.h>
#include <stdlib.h>

struct triangle{
        int a, b, c;
    };

int calculateObw(struct triangle s1);

int calculateObw2(struct triangle *s1);

int main()
{
    struct triangle t1;

    struct * t2 = new struct triangle;

    t2->a = 6;
    t2->b = 9;
    t2->c = 7;

    t1.a = 3;
    t1.b = 4;
    t1.c = 5;

    printf("Obwod trojkata: %d", calculateObw(t1));
    printf("Obwod trojkata: %d", calculateObw(t2));

    return 0;
}

int calculateObw(struct triangle s1){
    int obw = s1.a + s1.b + s1.c;
    return obw;
}

int calculateObw2(struct triangle *s1){
    int obw = s1.a + s1.b + s1.c;
    return obw;
}
