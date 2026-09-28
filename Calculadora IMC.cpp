#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
float peso, altura, IMC;
 /* Valores de referencia...
  Composicion          |  	   IMC
 -Inferior al normal  ->       < 18.5
 -Normal	          ->  18.5 – 24.9
 -Superior al normal  ->  25.0 – 29.9
 -Obesidad	          ->       > 30.0
 */
int main (){
	
	cout<<"--------------------------------------\n";
	cout<<"Calculadora de Indice de masa corporal\n";
	cout<<"--------------------------------------\n";
	cout<<"Ingrese su peso en kilos\n";
	cin>>peso;
	cout<<"Ingrese su altura en metros\n";
	cin>>altura;
	IMC=(peso/(altura*altura));
	cout<<"Resultado:\n"<<IMC;
	if (IMC<18.5) {
		cout<<"Peso inferior a lo normal\n";
	}if (IMC>=18.5 && IMC<25) {
		cout<<"Peso Normal\n";
	}if (IMC>=25 && IMC<30) {
	    cout<<"Peso superior a lo normal\n";
	}if (IMC>=30){
		cout<<"Obesidad\n";
	}
	system("pause");
	return 0;
}
