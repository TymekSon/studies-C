#include <iostream>

using namespace std;

struct element{
    int value;
    element *next;
};

int main(int argc, const char * argv[]) {

    element *head = new element;
    element *nowy, *current;
    int licznik = 1;

    if (head == NULL) return 1;

    head->value = licznik;
    head->next = NULL;

    while (licznik <= 3){
        cout<<"licznik = "<<licznik<<endl;
        nowy = new element;
        nowy->value = ++licznik;
        nowy->next = NULL;
        cout<<"nowy = "<<nowy<<endl;
        current = head;
        while (current->next){
            cout<<"in-while: head = "<<head<<"\tcurrent = "<<current<<"\tcurrent->next = "<<current->next<<endl;
            current = current->next;
        }
        current->next = nowy;
        cout<<"out-while: head = "<<head<<"\tcurrent = "<<current<<"\tcurrent->next = "<<current->next<<endl;
    }

    current = head;
    while(current){
        cout<<"Value: "<<current->value<<endl;
        current = current->next;
    }

    current = head;
    while (current != NULL){
        if(current->next){
            while(current->next->next)   //szukam przedostatni element
                current = current->next;
            delete current->next;
            current->next = NULL;
            current = head;
        }
        else{
            delete current;
            current = NULL;

        }
    }

    cout<<"head = "<<head<<endl;
    cout<<"current = "<<current<<endl;

    head = NULL;
    nowy = NULL;


    return 0;
}
