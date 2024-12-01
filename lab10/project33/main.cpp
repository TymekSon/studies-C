#include <iostream>

using namespace std;

string combine(string str1, string str2, string str3){
    string joined;
    joined = str1 + " " + str2 + " " + str3;

    return joined;
}

int main()
{
    string chain1, chain2, chain3;

    cin >> chain1;
    cin >> chain2;
    cin >> chain3;

    cout << combine(chain1, chain2, chain3);

    return 0;
}
