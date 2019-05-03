#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <string>
using std::string;
#include <vector>
#include <sstream>
using std::stringstream;

int menu();

int mcd(int, int);

int* llenarPrimos(int*);

void calculadoraPrimos(int*);

void freeArray(int*);

int menu2();

//void insertar(vector<string> x);

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
		if(opcion == 2){
			cout<<"------------------------------------"<<endl;
			int* primos= new int[25];		
			primos = llenarPrimos(primos);
			calculadoraPrimos(primos);
			freeArray(primos);
			primos = NULL;		
			cout<<"------------------------------------"<<endl;
		}
		if(opcion == 3){
			cout<<"------------------------------------"<<endl;
			int opcion2 = menu2();
			while(opcion<1 || opcion> 4){
				cout<< "El número que ha ingresado no es válido."<<endl;
				opcion = menu();
			}
			vector <int> x;	
			if(opcion2 == 1){
				cout<<"-<-<-<-<-<-<-<-<-<-<-<-<-<-<-<-<-<-<-"<<endl;
				//x = insertar(x);
				cout<<"La guerra se ha guardado exitosamente."<<endl;
				cout<<"-<-<-<-<-<-<-<-<-<-<-<-<-<-<-<-<-<-<-"<<endl;
			}
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
	if(a % b == 0){
		return b;
	}else{
		b = a % b;
		a = b;
		return mcd(a,b);
	}
}

int* llenarPrimos(int* primos){
	primos[0]=2;
	primos[1]=3;
	primos[2]=5;
	primos[3]=7;
	primos[4]=11;
	primos[5]=13;
	primos[6]=17;
	primos[7]=19;
	primos[8]=23;
	primos[9]=29;
	primos[10]=31;
	primos[11]=37;
	primos[12]=41;
	primos[13]=43;
	primos[14]=47;
	primos[15]=53;
	primos[16]=59;
	primos[17]=61;
	primos[18]=67;
	primos[19]=71;
	primos[20]=73;
	primos[21]=79;
	primos[22]=83;
	primos[23]=89;
	primos[24]=97;
	return primos;
}
void calculadoraPrimos(int* primos){
	int cont = 0, num, div;
	string cadena= "";
	cout<<"Ingrese el número: ";
	cin>>num;
	div = num;
	cout<<num<< " = ";
        for(int i = 0; i<25; i++){
                while(div%primos[i]==0){
			cont++;
			div = div/primos[i];
		}
		if(cont != 0){
			cout<<"("<<primos[i]<<"^"<<cont<<") * ";
			cont = 0;
		}
        }
	cout<<cadena<<endl;
}

void freeArray(int* array){
	if(array != NULL){
		delete[] array;
	}
}

int menu2(){
	cout<<"                 Menu2"<<endl
                <<"1.- Insertar"<<endl
                <<"2.- Buscar"<<endl
                <<"3.- Eliminar"<<endl
                <<"4.- Listar"<<endl;
        cout<< "        Ingrese una opción: ";
        int opcion;
        cin>> opcion;
        cout<<endl;
        return opcion;
}
/*void insertar(vector<string> x){
	string codigo,nombre,ainicio,afinal,pais,continente;
	cout<<"Ingrese el código: ";
	cin >> codigo;
	cout<< "Ingrese el nombre: ";
	cin>> nombre;
	cout<< "Ingrese el año de inicio: ";
	cin>> ainicio;
	cout<<"Ingrese el año que finalizó la guerra: ";
	cin>> afinal;
	cout<< "Ingrese los paises que participaron separados por coma: ";
	cin>> pais;
	cout<< "Ingrese el continente en donde esta guerra tuve lugar: ";
	cin>> continente;
	stringstream cad;
	cad<<codigo<<';'<<nombre<<';'<<ainicio<<';'<<afinal<<';'<<pais<<';'<<continente;
	x.push_back(cad);
	//return x;
}*/
