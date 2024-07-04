#include <iostream>
using namespace std;

int main() 
{
    int idade = 8;
    if(idade >=3 && idade <=11)
    {
        cout << "Voce esta na categoria: infantil";
    }else if(idade >=12 && idade <=17 ){
        cout << "Voce esta na categoria: juvenil";
    }else if(idade >=18 && idade <=34 ){
        cout << "Voce esta na categoria: adulto";
    }else if(idade >=35)
    {
        cout << "voce esta na categoria: master";
    }
    else
    { 
        cout << "voce nao tem idade suficiente para fazer este esporte";
    }
    return 0;  
}