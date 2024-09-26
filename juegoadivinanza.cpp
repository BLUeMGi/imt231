#include <iostream>
using namespace std;

int main() {
    cout << "***********************************" << endl;
    cout << "* Bienvenido al Juego de la Adivinanza! *" << endl;
    cout << "***********************************" << endl;

    int numero_secreto = 42;
    cout << "El número secreto es ..." << numero_secreto << ". No lo diga a para nadie!" << endl;

    int adivina;
    cout << "¿Cuál es el número? ";
    cin >> adivina;
    cout << "El valor de su número es: " << adivina << endl;
}


