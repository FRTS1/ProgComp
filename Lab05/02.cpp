#include <iostream>
#include <Windows.h>
using namespace std;

float Aumento(float SalarioAtual,float porcentagem);

int main()
{
    SetConsoleCP(1252);
    SetConsoleOutputCP(1252);

    float Salario;
    const int porcentagem=15;

    cout << "Salário Atual: ";
    cin >> Salario;
    cout << "Salário Ajustado: " << Aumento(Salario,porcentagem);

    return 0;
}

float Aumento(float SalarioAtual,float porcentagem)
{
    float SalarioAumento;
    SalarioAumento= (SalarioAtual + ((porcentagem/100) * SalarioAtual));
    return SalarioAumento;
}