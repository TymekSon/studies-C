#include <iostream>
#include <string>

using namespace std;

void zamienNaMale(string & tekst){
    for(char &znak : tekst){
        if (isupper(znak)){
            znak = tolower(znak);
        }
    }
}

int main() {
    string tekst = "Ala ma Kota";

    cout << "Oryginalny tekst: " << tekst << endl;

    zamienNaMale(tekst);

    cout << "Tekst po zamianie: " << tekst << endl;

    return 0;
}
