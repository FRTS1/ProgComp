#include<iostream>
#include<cmath>
#include<Windows.h>
using namespace std;

float Media(int x,int y);   

int main()
{
    SetConsoleCP(1252);
    SetConsoleOutputCP(1252);

    int x,y;

    cout << "Digite um valor inteiro: ";
    cin >> x;
    cout << "Digite outro valor inteiro: ";
    cin >> y;
    cout << "A média dos números é "<<Media(x,y);
    return 0;
}

float Media(int x,int y)
{
    float resultado;
    resultado = (float)(x+y)/2;
    return resultado;
}