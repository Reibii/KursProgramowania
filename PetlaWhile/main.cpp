#include <iostream>

using namespace std;

int populacja=1, godzina=0;

int main()
{
    while(populacja<=1000000000)
    {
        godzina++;
        populacja = populacja *2;
        cout << "uplynelo godzin:" << godzina << endl << "populacja to:" << populacja << endl;
    }
    return 0;
}
