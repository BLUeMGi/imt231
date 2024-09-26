#include <iostream>
using namespace std;

int main() {
    const int NUMERO_SECRETO = 42;
    int adivina;
    bool no_acerto = true;
    int intentos = 0;

    cout << "********************************************" << endl;
    cout << "** Bienvenido al Juego de la Adivinanza! **" << endl;
    cout << "********************************************" << endl;

    while (no_acerto) {
        intentos++;
        cout << "Tentativa " << intentos << endl;
        cout << "¿Cuál es el número? ";
        cin >> adivina;
        cout << "El valor de su número es: " << adivina << endl;

        bool acerto = adivina == NUMERO_SECRETO;
        bool mayor = adivina > NUMERO_SECRETO;

        if (acerto) {
            cout << "¡Felicitaciones! Adivinaste el número secreto." << endl;
            no_acerto = false;
        } else if (mayor) {
            cout << "El número ingresado es mayor que el número secreto." << endl;
        } else {
            cout << "El número ingresado es menor que el número secreto." << endl;
        }
    }

    cout << "Finalizó el juego." << endl;
    cout << "Adivinaste el número secreto en " << intentos << " intentos." << endl;

    return 0;
}






