#include<iostream>
#include<cmath>
using namespace std;

float quadrado(float x);
float cubo(float x);

int main()
{   
    float x;
    cout << "Digite um valor: ";
    cin >> x;
    cout << "Quadrado: "<<quadrado(x) <<endl;
    cout << "Cubo: "<<cubo(x) <<endl;
    cout << "Cubo do quadrado: "<<cubo(quadrado(x)) <<endl;
    return 0;   

}

float quadrado(float x)
{
    float quadrado;
    quadrado = (x*x);
    return quadrado;
}

float cubo(float x)
{
    float cubo;
    cubo = (x*x*x);
    return cubo;
}