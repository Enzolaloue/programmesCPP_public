#include <iostream>
using namespace std;

int main()
{

    unsigned long long nir;
    unsigned cle;

    cout << "saisir NIR";
    cin >> nir;

    cle = 97 - (nir%97);
    cout << "cle=" << cle << endl;

    cin.get();
    cin.ignore();
    return 0;
}
