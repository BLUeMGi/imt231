#include <iostream>
using namespace std;

int main() {
    cout << "*****************************************" << endl;
    cout << "* Bienvenido al Juego de la Adivinanza! *" << endl;
    cout << "*****************************************" << endl;

    const int NUMERO_SECRETO = 42;
    int adivina;
    bool acerto, mayor;

    cout << "¿Cuál es el número? ";
    cin >> adivina;

    acerto = adivina == NUMERO_SECRETO;
    mayor = adivina > NUMERO_SECRETO;

    cout << "El valor de su número es: " << adivina << endl;

    if (acerto) {
        cout << "¡Felicitaciones! Adivinaste el número secreto." << endl;
    } else if (mayor) {
        cout << "El número ingresado es mayor que el número secreto." << endl;
    } else {
        cout << "El número ingresado es menor que el número secreto." << endl;
    }

    return 0;
}




