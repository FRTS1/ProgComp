#include<iostream>
#include<cmath>
using namespace std;

float Distancia(float Px,float Py,float Qx,float Qy);

int main()
{
    float Qx,Qy,Px,Py;
    cout <<"Ponto P: \n";
    cin >> Px >> Py;
    cout <<"Ponto Q: \n";
    cin >> Qx >> Qy;
    cout << "A distância entre P e Q é: "<< Distancia(Px,Py,Qx,Qy);
    return 0;
}

float Distancia(float Px,float Py,float Qx,float Qy)
{
    float resultado,x,y;  
    x=(Qx-Px);
    y=(Qy-Py); 
    resultado = sqrt(pow(x,2)+pow(y,2));
    return resultado;        
}