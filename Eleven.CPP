#include <iostream>

using namespace std;

int main()
{
    
    int nb , chiffre, somme=0;

    cout<<"saisir in nombre: ";
    cin >> nb;

    do
    {
        chiffre = nb % 10;
        nb = nb /10;
        somme += chiffre;


    } while (nb !=0 );
    
cout <<"somme des chiffres = "<<somme <<endl;



    

    cin.get()
    ;cin.ignore();// on attend l'appui sur la touche
    return 0;
} 