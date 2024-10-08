#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    cout << "" << endl;
    cout << "¡Bienvenido al JUEGO de la adivinanza!" << endl;
    cout << "Ingrese un número del rango: 1 a 100 *" << endl;
    cout << "*" << endl;

    // Iniciar la semilla para generar números aleatorios
    srand(time(0));
    const int numero_secreto = 1 + rand() % 100; // Generar número aleatorio entre 1 y 100
    cout << "Número secreto aleatorio generado entre 1 y 100: " << numero_secreto << endl;

    int adivina;
    int intentos = 0;
    double puntos = 1000.0; // Guarda los puntos ganados
    bool no_acerto = true;

    while (no_acerto) {
        intentos++;
        cout << "Tentativa " << intentos << endl;
        cout << "¿Cuál es el número? ";
        cin >> adivina;

        double puntos_perdidos = abs(adivina - numero_secreto) / 2.0;
        puntos = puntos - puntos_perdidos;
        cout << "El valor del número es: " << adivina << endl;

        bool acerto = adivina == numero_secreto;
        bool mayor = adivina > numero_secreto;

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
    cout.precision(2);
    cout << fixed;
    cout << "Tu puntuación fue de " << puntos << " puntos." << endl;

    return 0;
}
