#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;

    cout << "Inserisci un numero o premi F per uscire dal programma: ";
    cin >> input;

    if (input == "F" || input == "f") {
        cout << "Uscita dal programma.\n";
        return 0;
    }

    int numero = stoi(input); // Converte string in int
    int quadrato = numero * numero;
    cout << "Il quadrato di " << numero << " è " << quadrato << ".\n";

    return 0;
}