#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int liczba,strzal,LicznikProb=0,koniec=0;

int main()
{
    cout << "Witaj! Wymyslilem sobie liczbe, zgadniesz jaka? Podpowiedz: od 1 do 100" << endl;
    srand(time(NULL));
    liczba = rand()%100+1;

    while(koniec<1)
    {
        cout<<"Strzelaj!"<<endl;
        cin>>strzal;
        LicznikProb++;

        if (strzal==liczba)
        {
            cout<<"Gratulacje, wygrales!"<<endl;
            cout<<"Trafiles przy "<<LicznikProb<<" strzale"<<endl;
            koniec=1;
        }
        if(strzal > liczba)
        {
            cout<<"No prawie prawie, ale troche za duzo"<<endl;
        }
        else if(strzal < liczba)
        {
            cout<<"Troche za malo, sprobuj jeszcze raz"<<endl;
        }
    }

    system("pause");

    return 0;
}
