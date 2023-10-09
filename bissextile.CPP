#include <iostream>
using namespace std;

int main() {
    int annee;

    // Demander à l'utilisateur de saisir une année
    cout << "Entrez une année : ";
    cin >> annee;

    // Vérifier si l'année est bissextile
    if ((annee % 4 == 0 && annee % 100 != 0) || (annee % 400 == 0)) {
        cout << annee << " est une année bissextile." << endl;
    } else {
        cout << annee << " n'est pas une année bissextile." << endl;
    }

    cin.get()
    ;cin.ignore();
    return 0;
}
