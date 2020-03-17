#include <iostream>

using namespace std;

int main(){
	int numeroAsociado;
	cout<<"Colores de un Semaforo"<<endl;
	cout<<"1. ROJO"<<endl;
	cout<<"2. VERDE"<<endl;
	cout<<"3. AMARILLO"<<endl;
	cout<<"Ingrese un Numero Asociado"<<endl;
	cin>>numeroAsociado;
	if(numeroAsociado==1)
		cout<<"Color ROJO: NO PASAR"<<endl;
	else if(numeroAsociado==2)
		cout<<"Color VERDE: ADELANTE"<<endl;
	else if(numeroAsociado==3)
		cout<<"Color AMARILLO: PRECAUCION"<<endl;
	else
		cout<<"ERROR NUMERO ASOCIADO NO VALIDO"<<endl;
	return 0;
}
