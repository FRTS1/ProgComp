#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()
{
    double aux;

    srand(time(NULL)); //time(NULL): me retorna o tempo em segundos
   
    aux = rand();

    cout << aux <<endl;
    if (aux>16834)
    {
        cout << "GRANDE";

    }
    
    else
    {
        cout << "PEQUENO";
    }
    
    return 0;
}   
   