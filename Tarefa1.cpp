#include <iostream>
using std::cin;
using std::cout;

int main(int argc, char **argv)
{
	//Declaração de variaveis
	int valor1;
	int valor2;
	
	cout << "Programa para determinar qual maior valor de dois valores!";
	cout << "\n";
	cout << "Digite o primeiro valor: ";
	cin >> valor1;	//Entrada do primeiro valor
	cout << "\n";
	cout << "Digite o segundo valor: ";
	cin >> valor2;	//Entrada do segundo valor
	cout << "\n";
	if (valor1 > valor2)
		cout << "Maior valor: " << valor1;
	else
		cout << "Maior valor: " << valor2;
	cout << "\n";
	return 0;
}
