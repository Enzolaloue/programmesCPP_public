#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    int score = 1, nbTentativesMax, alea, val;
    char choix;

    // initialiser les générateur
    // de nombres aléatoir

    srand(time(NULL));

    do
    {
        // saisir au clavier nbTentavivesMax

        cout << "saisir le nombre de tentatives maximum : ";
        cin >> nbTentativesMax;

        do
        {
            alea = rand();
        } while (alea < 1 || alea > 100);

        //  cout << "alea=" << alea << endl;

        do
        {

            do
            {
                cout << "Saisir un nombre entre 1 et 100 : ";
                cin >> val;
            } while (val < 1 || val > 100);

            if (alea == val)
            {
                cout << "GAGNER EN " << score << "TENTATIVE" << endl;
            }
            else if (val < alea)
            {
                cout << "TROP PETIT ! " << endl;
                score++; // idem que score = score + 1 ;
            }
            else
            {
                cout << "TROP GRAND ! " << endl;
                score++; // idem que score = score + 1 ;
            }

        } while (val != alea && score <= nbTentativesMax);

        if (val != alea)
        {
            cout << "PERDU ! Il fallait trouver le nombre " << alea << endl;
        }

        cout<<"Veux-tu continuer ? ";
        cin >>choix;

    } while (choix =='o' || choix == 'O');

    cin.get();
    cin.ignore();
    return EXIT_SUCCESS;
}