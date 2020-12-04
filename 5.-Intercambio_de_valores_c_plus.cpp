/*Este programa realiza un intercambio de valores, por ejemplo si al inicio del programa a = 5 y b = 8
al final del programa a = 8 y b = 5*/

#include <iostream> //Librería estándar de entrada y salida de datos
#include <locale.h> //Librería estándar de localicación (regionalización)

using namespace std; //Acceso al espacio de nombres

main(){ //Inicio del programa
	setlocale(LC_CTYPE, "Spanish"); //Llamamos a la librería y le damos el valor: idioma español. 
	float a,b, intercambio; //Declaramos las variables principales y una variable auxiliar para realizar el intercambio
	cout<<"Ingrese el valor de a: "<<endl; //Solicitamos el valor de a
	cin>>a; //Almacenamos el valor a
	cout<<"Ingrese el valor de b: "<<endl; //Solicitamos el valor b
	cin>>b; //Almacenamos el valor de b
	
	/*Ahora vamos a triangular pasando el valor de:
	a = 8
	b = 5
	intercambio = a  (Intercambio vale ahora 8)
	a = b (Como el valor de a ya pasó a la variable: "intercambio" ahora podemos ponerle el valor de la variable: "b", b = 5)
	b = intercambio (Ahora b recupera el valor que tenía la variable: "a" que está almacenado en la variable: "intercambio" b = 8*/
	
	intercambio = a; //Pasamos a la variable "intercambio" el valor de "a"
	a = b; //Pasamos el valor de la variable "b" a la variable "a"
	b = intercambio; //Pasamos el valor de "a" almacenado en "intercambio" a la variable "b"
	
	cout<<"\nEl valor de la variable a cambió al valor: "<<endl;
	cout<<a; //imprimimos en pantalla el valor actual de a
	cout<<"\nEl valor de la variable b cambió al valor: "<<endl;
	cout<<b; //Imprimimos en pantalla el valor actual de b
	cout.precision(2); //Asignamos una precisión de 2 decimales
	return 0; //Fin del programa
}
