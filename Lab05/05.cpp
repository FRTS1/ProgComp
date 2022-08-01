#include<iostream>
#include<cmath>
using namespace std;

float angulo(float x, float y);

int main()
{   
    float x,y; 
    cout << "Digite as coordenadas do vetor: \n";
    cout << "X: ";
    cin >> x;
    cout << "Y: ";
    cin >> y;
    cout << "O ângulo do vetor é " << angulo(x,y) << " graus.";
    return 0;   
}

float angulo(float x, float y)
{
    float angulorad,angulograu;
    angulorad = atan2(y,x);
    angulograu = (angulorad *180)/3.14;
    return angulograu;
}