#include <iostream>

using namespace std;

int main()
{
    string imie, nazwisko, numer_tel;

    cout << "Hello world! Jak masz na imi�?" << endl;   cin >> imie;
    cout << "Jak masz na nazwisko?" << endl;            cin >> nazwisko;
    cout << "Podaj numer telefonu." << endl;            cin >> numer_tel;

    cout << "Twoja wizyt�wka wygl�da tak:" << endl;
    cout << imie << " " << nazwisko << endl;
    cout << "Mobile: " << numer_tel << endl;

    return 0;
}
