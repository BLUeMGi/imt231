#include <iostream>
#include <cmath>

using namespace std;

const int NUMERO_SECRETO = 42;
int adivina;
bool no_acerto = true;
int intentos = 0;
double puntos = 1000.0;

int main() {
    cout << "********************************************" << endl;
    cout << "** Bienvenido al Juego de la Adivinanza! **" << endl;
    cout << "********************************************" << endl;

    while (no_acerto) {
        intentos++;
        cout << "Tentativa " << intentos << endl;
        cout << "¿Cuál es el número? ";
        cin >> adivina;
        double puntos_perdidos = abs(adivina - NUMERO_SECRETO) / 2;
        puntos -= puntos_perdidos;
        cout << "El valor de su número es: " << adivina << endl;
        bool acerto = adivina == NUMERO_SECRETO;
        bool mayor = adivina > NUMERO_SECRETO;

        if (acerto) {
            cout << "¡Felicitaciones! Adivinaste el número secreto" << endl;
            no_acerto = false;
        } else if (mayor) {
            cout << "El número ingresado es mayor que el número secreto" << endl;
        } else {
            cout << "El número ingresado es menor que el número secreto" << endl;
        }
    }

    cout << "Finalizó el juego" << endl;
    cout << "Adivinaste el número secreto en " << intentos << " intentos." << endl;
    cout << "Tu puntuación fue de " << puntos << " puntos" << endl;

    return 0;
}







