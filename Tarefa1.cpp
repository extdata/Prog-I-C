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
	

	cout << "\nDigite o segundo valor: ";
	
    cin >> valor2;	//Entrada do segundo valor
		
    if ( valor1 > valor2 )
		cout << "\nMaior valor: " << valor1 << '\n';
    else if( valor1 < valor2 )
        cout << "adeas\n";
	else
		cout << "\nMaior valor: " << valor2 << '\n';
	
	
    return 0;

    int idade;
    float altura;
    
    cout << "Indicar idade e altura para saber se pode entrar no insano\n";
    
    cout << "Altura minima de 1,60 metros e idade minima de 16 anos e idade maxima de 60 anos!\n";
    
    cout << "Indique a altura: ";
    cin >> altura;
    
    cout << "Indique a idade: ";
    cin >> idade;
    
    if (altura >= 1.60 && ( idade >= 16 || idade < 60))
        cout << "Permitida a entrada no brinquedo";
    else
        cout << "Não permitida a entrada no brinquedo";
        
        
    return 0;
    
    int a;
    int b;
   
    
    a = 2;
    b = 2;
    
    
    //pos-incremento
    
    cout << "Valor a eh: " << ++a << '\n';
    
    //pre-incremento
    
    cout << "Valor b eh: " << b++ << '\n';
    
    return 0;
    
    float altura;
    int idade;
    
    cout << "Ele ira crescer 1 cm apartir dos 10 anos ou 0.08 até os 10 anos! \n";
	cout << "Digite a idade: \n";
    cin >> idade;
	
	altura = idade > 10? 1: 0.08;
	
	cout << "Ele cresceu " << altura << "mm apartir dessa idade\n";
	
	system ("pause");
	return 0;

}