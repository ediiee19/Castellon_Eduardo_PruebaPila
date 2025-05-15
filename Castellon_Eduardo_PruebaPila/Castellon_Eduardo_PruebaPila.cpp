#include <iostream>
#include "PaliChecker.h"

int main()
{
    string frase;
    PaliChecker check;
    while (true) {
        cout << "Frase: ";
        getline(cin,frase);

        if (frase.empty()) {
            break;
        }

        check.setFrase(frase);
        if (check.esPali()) {
            cout << "La frase es un pal�ndromo.\n" << endl;
        }
        else {
            cout << "La frase no es un pal�ndromo.\n" << endl;
        }

    }
    cout << "Programa finalizado." << endl;
    return 0;
}