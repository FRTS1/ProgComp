#include<iostream>
using namespace std;

void UmTres();
void Dois();

int main()
{
    cout <<"Começando agora: \n";
    UmTres();
    cout << "Pronto";
    return 0;
}

void UmTres()
{
    cout <<"Um\n";
    Dois();
    cout <<"Três\n";
}

void Dois()
{
    cout << "Dois\n";
}
