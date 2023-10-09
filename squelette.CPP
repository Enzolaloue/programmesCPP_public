#include <iostream>

using namespace std;

int main()
{
    double celsius,fahrenheigt,
    min,max,pas;

    cout<<"Saisir min, max et pas :";
    cin>>min>>max>>pas;

    cout<<"CELSIUS FAHRENHEIGT"<<endl;
    for (celsius=min ;celsius<=max;celsius+=pas)
    {
        fahrenheigt=9 *celsius/5.0 + 32.0;
        cout <<celsius<<"\t"<<fahrenheigt<<endl;
        
    }
    

    cin.get()
    ;cin.ignore();// on attend l'appui sur la touche
    return EXIT_SUCCESS;
} 