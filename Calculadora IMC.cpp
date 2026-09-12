#include <iostream>
#include <string>
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
	cout<<"\nResultado:"<<IMC;
	if (IMC<18.5) {
		cout<<"\nPeso inferior a lo normal";
	}if (IMC>=18.5 && IMC<25) {
		cout<<"\nPeso Normal";
	}if (IMC>=25 && IMC<30) {
	    cout<<"\nPeso superior a lo normal";
	}if (IMC>=30){
		cout<<"\nObesidad";
		cout<<"\nGordo avevo";
	}
	
	return 0;
}
