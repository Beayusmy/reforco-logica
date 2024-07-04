#include <iostream>

using namespace std;

int main (){

    system("clear");
    cout << "inicializando o programa temperatura \n";
    int temperatura = 5;

    if(temperatura >= 0 && temperatura <= 15) {
        cout << "acender o led vermelho \n";
}else if(temperatura >= 16 && temperatura <= 23) {
    cout << "Acender o led azul \n";

}else if(temperatura >= 24 && temperatura <= 30) {
    cout << "Acender o led verde \n";
}else if(temperatura >= 32 && temperatura <= 37) {
    cout << "Acender o led roxo \n";
} else {
    cout << "Acender o led vermelho e verde \n";
}    
cout << "Fim do programa!!" << endl;
}