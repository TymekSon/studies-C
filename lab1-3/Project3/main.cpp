#include <iostream>
#include <string>

using namespace std;

const string NAZWA_GRY = "Pogromcy C++";

main()
{
 int a=0;
 cout << "a = " << a << endl;
 cout << "post-inkrementacja a= " << a++ << endl; //a=a+1
 cout << "a = " << a << endl;
 int b=0;
 cout << "b = " << b << endl;
 cout << "pre-inkrementacja b = " << ++b << endl;
 cout << "b = " << b << endl;
 cout << "a = " << a << " b = " << b << endl;
 a+=2; // a=a+2;
 cout << "a+=2: " << a << endl;
 a+=b; //a=a+b;
 cout << "a+=b: " << a << endl;
 b=b+5;
 cout << "b = " << b << endl;
 return 0;
}
