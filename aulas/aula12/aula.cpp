#include <iostream>

using namespace std;

int main() {
    pense:
    int valor = 0;
    string sn = "";
    cout << "num dia você vai para uma loja que vende placas de video e você pesen em comprar a> 1 ou 2 ou 3" << "\n\n";
    cout << "Nvidia NVS 300 \n" << "RTX 5090Ti \n" << "RX 9600 AMD \n\n";
    cin >> valor;
    switch(valor) {
    case 1:
        cout << "Burro incopente e POBRE!!\n\n";
        break;
    case 2:
        cout << "Governo: E ai comparsa eu quero saber como que tu comprou esta porra seu pobre\n\n";
        break;
    case 3:
        cout << "            __ \n" << "            // \n" << "           !!!! \n" << "          !!!!!! \n" << "         -------- \n" << "        ++++++++++ \n" << "       ++++++++++++ \n" << "      ************** \n" << "     **************** \n" << "    ****************** \n" << "   ******************** \n" << "  ********************** \n" << " ************************ \n" << "************************** \n"  << "__________________________ \n" << " ________________________ \n" << "  ______________________ \n" << "   ____________________ \n" << "    __________________ \n" << "     ________________ \n" << "      ______________ \n" << "       ____________ \n" << "        __________ \n" << "         ________ \n" << "          ______ \n" << "           ____ \n" << "            __ \n" << " \n" << " \n";
        break;
    default:
        cout << "nada?\n\n";
        break;
    }
    cout << "que pensar denovo? \n\n";
    cin >> sn;
    if (sn == "s" or sn == "sim") {
        goto pense;
    }
    system("pause");
	return 0;
}
