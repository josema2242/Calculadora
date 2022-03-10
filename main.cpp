#include <iostream>
#include"biblioteca.hpp"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	
	int n1, n2, resultado, ope;
	cout<<"Ingrese una opcion:" << endl;
	cout<<"1. Suma" << endl;
	cout<<"2. Resta" << endl;	
	cout<<"3. Multiplicacion" << endl;
	cout<<"4. Division" << endl;
	cout<<"5. Salir" << endl;
	cin>>ope;
	
	switch (ope) 
	{
		case 1: 
		
			cout<<"Ingrese el primer numero"<<endl;
			cin>>n1;
			cout<<"Ingrese el segundo numero"<<endl;
			cin>>n2;
			resultado=suma(n1,n2);
			cout<<"El resultado de la suma es: "<< resultado << endl;
			break;
			
		case 2:
			
			cout<<"Ingrese el primer numero"<<endl;
			cin>>n1;
			cout<<"Ingrese el segundo numero"<<endl;
			cin>>n2;	
			resultado=resta(n1,n2);
			cout<< "El resultado de la resta es: "<< resultado << endl;
			break;
			
		case 3:
			
			cout<<"Ingrese el primer numero"<<endl;
			cin>>n1;
			cout<<"Ingrese el segundo numero"<<endl;
			cin>>n2;
			resultado=multiplicacion(n1,n2);
			cout<< "El resultado de la multiplicacion es: "<< resultado << endl;
			break;
			
		case 4:
			
			cout<<"Ingrese el primer numero"<<endl;
			cin>>n1;
			cout<<"Ingrese el segundo numero"<<endl;
			cin>>n2;
			resultado=division(n1,n2);
			if (resultado==0){
				cout<<"Error, la Division no se puede realizar"<< endl;
			}else{
				cout<<"El resultado de la division es: "<< resultado << endl;
			}
			break;

		case 5:
			cout<<"Gracias por usar el programa";
			return 0;
			break;
			
		default:
			cout<<"Error, opcion invalida"<< endl;		
	}
	
	system("pause");
	return 0;
}


