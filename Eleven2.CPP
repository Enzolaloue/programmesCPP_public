#include <iostream>

using namespace std;

int main()
{

    int i, n, nb, chiffre, somme = 0;

  
    for (i = 1; i < 999999; i++)
    {
        somme=0;
        nb = i;
        do
        {
            chiffre = nb % 10;
            nb = nb / 10;
            somme += chiffre;
        } while (nb != 0);

        if (i == 11*somme)
        {
            cout <<"le nombre est "<<i <<endl;
        }
        

    }
    

    cin.get();
    cin.ignore(); // on attend l'appui sur la touche
    return 0;
}