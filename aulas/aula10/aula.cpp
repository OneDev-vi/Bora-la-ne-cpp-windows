#include <iostream>

using namespace std;
//Operadores Logicos: and (&&), or (||), not(!)

int main() {
    int num;
    bool tof = 1;
    cout << "digite um numero entre 0-20" << endl;
    cin >> num;
    if ( (num >= 3 && num <= 7) || (num >= 10 && num <= 14) || (num >= 18 && num <= 19) ) {
        cout << "Valor aceito" << endl;
        cout << num << endl;
    } else {
        cout << "Valor negado" << endl;
        cout << num;
    }
    if (!tof) {
        cout << "rejeitado" << endl;
    } else {
        cout << "aceito" << endl;
    }
    return 0;
}
