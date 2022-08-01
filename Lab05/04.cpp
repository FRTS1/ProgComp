#include<iostream>
#include<cmath>
using namespace std;

float MVetor(float x, float y);

int main()
{   
    float x,y;
    cout << "Digite as coordenadas do vetor: \n";
    cout << "X: ";
    cin >> x;
    cout << "Y: ";
    cin >> y;
    cout << "O tamanho do vetor é: "<<MVetor(x,y);
    return 0;   
}

float MVetor(float x, float y)
{
    float modulo;
    modulo = sqrt((pow(x,2)+pow(y,2)));
    return modulo;
}
