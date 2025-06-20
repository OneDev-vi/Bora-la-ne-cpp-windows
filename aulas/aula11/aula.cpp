#include <iostream>

using namespace std;

// Operador ternario heyyyyy!
#define min 60.0 //minimo

int main() {
    string resultado;
    float armazen;
    float rafael;
    float joao;
    cout << "Ecreva a nota do primeiro aluno rafael" << "\n\n";
    cin >> rafael;
    cout << "Escreva a nota do aluno joao" << "\n\n";
    cin >> joao;
    armazen = (rafael + joao) / 2;
    resultado = (armazen >= min) ? "Prabens sua no foi de: " : "vai toma seu cu velho broxa, sua nota foi: ";
    cout << resultado << armazen << "\n\n";
    return 0;
}
