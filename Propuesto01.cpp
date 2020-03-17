#include <iostream>

using namespace std;

int main(){
	int numeroAsociado;
	cout<<"LISTADO DE PLANETAS"<<endl;
	cout<<"1. Mercurio"<<endl;
	cout<<"2. Venus"<<endl;
	cout<<"3. Tierra"<<endl;
	cout<<"4. Marte"<<endl;
	cout<<"5. Jupiter"<<endl;
	cout<<"6. Saturno"<<endl;
	cout<<"7. Urano"<<endl;
	cout<<"8. Neptuno"<<endl;
	cout<<"Ingrese un Numero asociado para saber la distancia media al SOL"<<endl;
	cin>>numeroAsociado;
	if(numeroAsociado == 1)
		cout<<"Mercurio: 59 Millones de Kilometros"<<endl;
	else if(numeroAsociado == 2)
		cout<<"Venus:108 Millones de Kilometros"<<endl;
	else if(numeroAsociado == 3)
		cout<<"Tierra:150 Millones de Kilometros"<<endl;
	else if(numeroAsociado == 4)
		cout<<"Marte:228 Millones de Kilometros"<<endl;
	else if(numeroAsociado == 5)
		cout<<"Jupiter:750 Millones de Kilometros"<<endl;
	else if(numeroAsociado == 6)
		cout<<"Saturno:1431 Millones de Kilometros"<<endl;
	else if(numeroAsociado == 7)
		cout<<"Urano:2877 Millones de Kilometros"<<endl;
	else if(numeroAsociado == 8)
		cout<<"Neptuno:4509 Millones de Kilometros"<<endl;
	else
		cout<<"ERROR: "<<numeroAsociado<<" no está asociado a ningún planeta."<<endl;
	return 0;
}
