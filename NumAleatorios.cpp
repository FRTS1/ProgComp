#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()
{   
    srand(time(NULL)); //time(NULL): me retorna o tempo em segundos
    rand(); //Utiliza srand para gerar um número aleatório

    cout << "Gerando numeros pseudoaleatórios: \n" << rand() <<"," << rand() <<","<< rand() << "," << rand()<< "," << rand();

    return 0;
}