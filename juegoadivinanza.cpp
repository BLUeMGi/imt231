#include <iostream>
using namespace std;

int main() {
    cout << "Bienvenido al Juego de la Adivinanza" << endl;
    const int NUMERO_SECRETO = 42;
    int numero;

    bool acierto = false;

    while (!acierto) {
        cout << "Cual es tu numero: ";
        cin >> numero;

        if (numero == NUMERO_SECRETO) {
            acierto = true;
            cout << "Felicidades! Has acertado el número secreto" << endl;
        } else if (numero > NUMERO_SECRETO) {
            cout << "El número ingresado es mayor que el número secreto" << endl;
        } else {
            cout << "El número ingresado es menor que el número secreto" << endl;
        }
    }

    cout << "Fin del juego" << endl;

    return 0;
}





