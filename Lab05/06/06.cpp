#include<iostream>
#include<cmath>
#include "06Cab.h"
using namespace std;

int main()
{   
    float x,y;
    cout <<"Digite as coordenadas do vetor: \n";
    cout << "X: ";
    cin >> x;
    cout << "Y: ";
    cin >> y;
    cout << "Coordenadas polares do vetor: \n";
    cout << angulo(x,y);
    cout << "Coordenadas do módulo do vetor: \n";
    cout << MVetor(x,y);
    return 0;   
}