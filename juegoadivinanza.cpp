#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
cout<<""<<endl;
cout<<" Bienvenido al Juego de la Adivinanza!"<<endl;
cout<<"Ingrese un número en el rango: 1 a 100"<<endl;
cout<<""<<endl;

cout<<endl;
cout<<"Elija el nível de dificultad"<<endl;
cout<<"Fácil (F), Medio (M) o Difícil (D)"<<endl;

char dificultad;
cin>>dificultad;
int numero_tentativas;

if(dificultad=='F'){
    numero_tentativas=15;
}
else if(dificultad=='M'){
    numero_tentativas=10;
}
else {
    numero_tentativas=5;
}

srand(time(0));
const int NUMERO_SECRETO=1+rand()%100;
cout<<endl;
cout<<"Número secreto aleatorio generado entre 1 y 100: "<<NUMERO_SECRETO<<endl;
cout<<endl;
int adivina, intentos=1;
bool no_acerto=true;
double puntos=1000.0;

for (intentos;intentos<=numero_tentativas;intentos++){
    cout<<endl;
	cout<<"Tentativa "<<intentos<<endl;
	cout<<"Cuál es el número? ";
	cin>>adivina;

	double puntos_perdidos=abs(adivina-NUMERO_SECRETO)/2.0;
	puntos=puntos-puntos_perdidos;

	cout<<"El valor de su número es: "<<adivina<<endl;

	bool acerto=adivina==NUMERO_SECRETO;
	bool mayor=adivina>NUMERO_SECRETO;

	if(acerto){
		cout<<"Felicitaciones!!! Adivinaste el número secreto!"<<endl;
		no_acerto=false;
		break;
	}

	else if(mayor){
		cout<<"El número ingresado es mayor que el número secreto"<<endl;
	}

	else{
		cout<<"El número ingresado es menor que el número secreto"<<endl;
	}
}
cout<<endl;
cout<<""<<endl;
cout<<"FIN DE JUEGO"<<endl;
cout<<""<<endl;
if(no_acerto==false){
    cout<<"Ganaste con "<<intentos-1<<" intentos"<<endl;
    cout.precision(2);
    cout<<fixed;
    cout<<"Su puntuación fue de "<<puntos<<" puntos"<<endl;
}
else{
    puntos=0;
    cout<<"Perdiste tras "<<intentos-1<<" intentos"<<endl;
    cout<<"Tu puntuación fue de "<<puntos<<" puntos"<<endl;
}
}
