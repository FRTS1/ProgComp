#include<iostream>
using namespace std;

float imc(float peso, float altura);

int main()
{
    float altura, peso;
    cout << "Índice de Massa Corporal (IMC)\n";
    cout << "Altura: ";
    cin >> altura;
    cout << "Peso: ";
    cin >> peso;
    cout << "IMC: " << imc(peso, altura);
    return 0;
}

float imc(float peso, float altura)
{
    float resultado;
    resultado =peso/(altura*altura);    
    return resultado;
}