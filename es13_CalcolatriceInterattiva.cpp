#include <iostream>
#include <string>

using namespace std;

int main() {
    float numero1, numero2, risultato;
    int scelta;
    
    cout << "---|| CALCOLATRICE INTERATTIVA ||---\n";
    cout << "1. Somma\n";
    cout << "2. Sottrazione\n";
    cout << "3. Moltiplicazione\n";
    cout << "4. Divisione\n";
    cout << "Scegli l'operazione (1-4): ";
    cin >> scelta;

    switch(scelta) {
        case 1:
            cout << "Inserisci il primo numero: ";
            cin >> numero1;
            cout << "Inserisci il secondo numero: ";
            cin >> numero2;
            risultato = numero1 + numero2;
            cout << "Il risultato della somma è: " << risultato << endl;
            break;
        case 2:
            cout << "Inserisci il primo numero: ";
            cin >> numero1;
            cout << "Inserisci il secondo numero: ";
            cin >> numero2;
            risultato = numero1 - numero2;
            cout << "Il risultato della sottrazione è: " << risultato << endl;
            break;
        case 3:
            cout << "Inserisci il primo numero: ";
            cin >> numero1;
            cout << "Inserisci il secondo numero: ";
            cin >> numero2;
            risultato = numero1 * numero2;
            cout << "Il risultato della moltiplicazione è: " << risultato << endl;
            break;
        case 4:
            cout << "Inserisci il primo numero: ";
            cin >> numero1;
            cout << "Inserisci il secondo numero: ";
            cin >> numero2;
            if (numero2 == 0) {
                cout << "Errore: Divisione per zero non consentita." << endl;
                return 1;
            }
                risultato = numero1 / numero2;
                cout << "Il risultato della divisione è: " << risultato << endl;
            break;
        default:
            cout << "Operazione non valida." << endl;
            break;
    }
}