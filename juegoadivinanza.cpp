#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int secreto = 42; // Número secreto del juego de Adivinanza
    int adivina;
    cout << "***************************************" << endl;
    cout << "Bienvenido al Juego de Adivinanza!" << endl;
    cout << "***************************************" << endl;
    cout << "Adivina el número secreto: ";
    cin >> adivina;

    if (adivina == secreto){
        cout << "Felicidades!! Adivinó el número secreto" << endl;
    }
    else if (adivina > secreto){
        cout << "El número ingresado es mayor que el número secreto" << endl;
    }
    else {
        cout << "El número ingresado es menor que el número secreto" << endl;
    }
    return 0;
}



