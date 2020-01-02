#include <iostream>

using namespace std;

string PIN;

int main()
{
    cout << "Witaj w banku" << endl;
    cout << "Podaj PIN" << endl;
    cin >> PIN ;

    if (PIN == "1749")
    {
        cout << "PIN poprawny" << endl ;
    }
    else
    {
        cout << "PIN niepoprawny" << endl ;
    }
    return 0;
}
