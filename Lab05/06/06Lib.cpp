#include<iostream>
#include<cmath>
using namespace std;

float MVetor(float x, float y)
{
    float modulo;
    modulo = sqrt((pow(x,2)+pow(y,2)));
    return modulo;
}

float angulo(float x, float y)
{
    float angulorad,angulograu;
    angulorad = atan2(y,x);
    angulograu = (angulorad *180)/3.14;
    return angulograu;
}