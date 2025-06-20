#include <iostream>
//switch aninhado

using namespace std;

int main() {
    float dinheiro;
    int opcao;
    cout << "aquela mesma historia da placa de video mas agora escolha uma das opçôes [1,2 ou 3]\n\n";
    cin >> opcao;
    switch(opcao) {
    case 1:
        cout << "tu é um pobre fudido\n";
        dinheiro = 185.55;
        cout << "esta é sua quantia em dinheiro: " << dinheiro << "\n\n";
        opcao = 0;
        cout << "escolha uma dessa placa de video: [1]=Geforce 9800 GT [2]=GT340";
        cin >> opcao;
        switch(opcao) {
        case 1:
            cout << "é sei lá \n";
            break;
        case 2:
            cout << "eu sei lá porra se é boa \n";
            break;
        }
    case 2:
        cout << "ummmmmm um clase media \n";
        dinheiro = 855.55;
        cout << "esta é sua quantia em dinheiro: " << dinheiro << "\n\n";
        opcao = 0;
        cout << "escolha uma dessa placa de video: [1]=RX550 [2]=Galaxy GT 1030 \n\n";
        cin >> opcao;
        switch(opcao) {
        case 1:
            cout << "Otima escolha eu acho \n";
            break;
        case 2:
            cout << "essa placa é bonita em? \n";
            break;
        }
    case 3:
        cout << "Ummmm um burgues safado emmmmmmm? \n";//é piada é PIADA!!
        dinheiro = 2555.75;
        cout << "esta é sua quantia em dinheiro: " << dinheiro << "\n\n";
        opcao = 0;
        cout << "escolha uma dessa placa de video: [1]=RXT4060 [2]=RX7600 \n\n";
        cin >> opcao;
        switch(opcao) {
        case 1:
            cout << "Caramba meu mano! \n";
            break;
        case 2:
            cout << "Caramba que placa enorme \n";
            break;
        }
    }
    system("pause");
	return 0;
}
