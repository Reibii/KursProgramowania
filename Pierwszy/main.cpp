#include <iostream>

using namespace std;

int uczniowie,cukierki,x,y;

int main()
{
    cout << "Ilu uczniow jest w twojej klasie:" << endl;
    cin >> uczniowie;
    cout << "Ile masz cukierkow:" << endl;
    cin >> cukierki;

    x = cukierki/(uczniowie-1);
    cout << "Ilosc cukierkow do rozdania to:" << x << endl;

    y = cukierki - x * (uczniowie - 1);
    cout << "Ilosc cukierkow dla Jasia to:" << y;

    return 0;
}
