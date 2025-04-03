// non sono riuscito a fare il controllo per l'input giusto ma il resto è corretto
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    string input;

    cout << "Inserisci un numero o premi F per uscire dal programma: ";
    cin >> input;

    if (input == "F" || input == "f") {
        cout << "Uscita dal programma.\n";
        return 0;
    }

    cout << "Vuoi elevare il tuo numero alla potenza? (S/N): ";
    char scelta;
    cin >> scelta;
    if (scelta == 'S' || scelta == 's') {
        cout << "Inserisci la potenza: ";
        int potenza;
        cin >> potenza;

        int numero = stoi(input);
        int risultato = pow(numero, potenza);
        cout << "Il numero " << numero << " elevato alla potenza " << potenza << " è " << risultato << ".\n";
    }
    else if (scelta == 'N' || scelta == 'n') {
        int numero = stoi(input); 
        int quadrato = numero * numero;
        cout << "Il quadrato di " << numero << " è " << quadrato << ".\n";   
    } else {
        cout << "Scelta non valida.\n";
        return 1;
    }


    return 0;
}