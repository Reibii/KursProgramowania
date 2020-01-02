#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <conio.h>

using namespace std;

float x,y;
char wybor;
float wdodawania, wodejmowania, wmnozenia, wdzielenia;

int main()
{
    while(true)
    {

        cout << "Podaj liczbe" << endl;
        cin >> x;
        cout << "Podaj kolejna liczbe" << endl;
        cin >> y;

        cout << "MENU" << endl;
        cout << "--------------------" << endl;
        cout << "1 - Dodawanie" << endl;
        cout << "2 - Odejmowanie" << endl;
        cout << "3 - Mnozenie" << endl;
        cout << "4 - Dzielenie" << endl;
        cout << "5 - Koniec" << endl;
        cout << "--------------------" << endl;

        cout << "Wybierz dzia³anie:";
        wybor=getch();

        switch(wybor)
        {
        case '1':
            {
                wdodawania = 0;
                wdodawania = x + y;
                cout<<"Wynik dodawania to:"<<wdodawania<<endl;
            }
        break;
        case '2':
            {
                wodejmowania = 0;
                wodejmowania = x - y;
                cout<<"Wynik odejmowania to:"<<wodejmowania<<endl;
            }
        break;
        case '3':
            {
                wmnozenia = 0;
                wmnozenia = x * y;
                cout<<"Wynik mnozenia to:"<<wmnozenia<<endl;
            }
        break;
        case '4':
            {
                if (y==0) cout<< "Nie dzielimy przez zero!";
                else
                {
                    wdzielenia = 0;
                    wdzielenia = x / y;
                    cout<<"Wynik dzielenia to:"<<wdzielenia<<endl;
                }
            }
        break;
        case '5':
            {
                exit(0);
            }
        break;
        default:
            {
                cout<<"Nie ma takiej opcji"<<endl;
            }
        break;
        }
        getchar();getchar();
        system("cls");
    }

    return 0;
}
