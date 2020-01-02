#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

string imie,nazwisko;
int numer;

int main()
{

    fstream plik;
    plik.open("wizytowka.txt",ios::in);

    if(plik.good()==false)
    {
        cout<<"Plik nie istnieje"<<endl;
        exit(0);
    }

    string linia;
    int nr_lini=1;

    while(getline(plik,linia))
    {
        switch(nr_lini)
        {
        case 1: imie=linia; break;
        case 2: nazwisko=linia; break;
        case 3: numer=atoi(linia.c_str()); break;
        }
        nr_lini++;
    }

    plik.close();

    cout<<imie<<endl;
    cout<<nazwisko<<endl;
    cout<<numer<<endl;

    return 0;
}
