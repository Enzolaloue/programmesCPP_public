#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    int n;

    // initialiser les générateur
    // de nombres aléatoir

    srand(time(NULL));

    do
    {
        n = rand();
    } while (n < 1 || n > 100);

    cout << "n=" << n << endl;

    cin.get();
    cin.ignore();
    return EXIT_SUCCESS;
}