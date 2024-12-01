#include <iostream>

using namespace std;

struct triangle{
    int a, b, c;
};

void rewrite(struct triangle t1, struct triangle *t2){
    t2->a = t1.a;
    t2->b = t1.b;
    t2->c = t1.c;
}

int main(int argc, const char * argv[]){

    struct triangle t1;
    t1.a = 3;
    t1.b = 4;
    t1.c = 5;

    struct triangle * t2 = new struct triangle;

    rewrite(t1, t2);

    cout<<t2->a<<endl;
    cout<<t2->b<<endl;
    cout<<t2->c<<endl;

    delete(t2);
    t2 = NULL;

    return 0;
}
