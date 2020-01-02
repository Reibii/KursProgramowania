#include <iostream>

using namespace std;

int wiek;

int main()
{
    cout << "Ile masz lat" << endl;
    cin >> wiek ;

    if (wiek>17)
    {
        if (wiek>34)
        {
            cout << "Mozesz kandydowac na prezydenta i jestes pelnoletni";
        }
        else
        {
            cout << "Nie mozesz kandydowac na prezydenta i jestes pelnoletni";
        }
    }
    else
    {
        cout << "Nie jestes pelnoletni i nie mozesz kandydowac na prezydenta";
    }
    return 0;
}
