#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int menu();

int mcd(int, int);

int main(){
	int opcion = 0;
	do{
		opcion = menu();
		while(opcion<1 || opcion>4){
			cout<<"La opción que ha ingresado no es válida."<<endl;
			opcion = menu();
		}
		if(opcion == 1){
			cout<<"------------------------------------"<<endl;
			int num1, num2;
			cout<< "Ingrese el primer número: ";
			cin>> num1;
			cout<< "Ingrese el segundo número: ";
			cin>> num2;
			while(num1<=0 || num2<=0){
				cout<< "Los números tienen que ser positivos."<<endl;
				cout<< "Ingrese el primer número: ";
                        	cin>> num1;
                        	cout<< "Ingrese el segundo número: ";
                       		cin>> num2;
			}
			while(num1<=num2){
				cout<<"El primer número debe de ser mayor que el segundo número."<<endl;
				cout<< "Ingrese el primer número: ";
                                cin>> num1;
                                cout<< "Ingrese el segundo número: ";
                                cin>> num2;
			}
			int resultado = mcd(num1,num2);
			cout<<"El máximo común divisor es: "<<resultado<<endl;
			cout<<"------------------------------------"<<endl;
		}
	}while(opcion != 4);
	return 0;
}

int menu(){
	 cout<<"                 Menu"<<endl
                <<"1.- Ejercicio 1"<<endl
                <<"2.- Ejercicio 2"<<endl
                <<"3.- Ejercicio 3"<<endl
                <<"4.- Salir"<<endl;
        cout<< "        Ingrese una opción: ";
        int opcion = 0;
        cin>> opcion;
        cout<<endl;
        return opcion;
}

int mcd(int a, int b){
	if(a% b == 0){
		return b;
	}else{
		b = a % b;
		a = b;
		return mcd(a,b);
	}
}
