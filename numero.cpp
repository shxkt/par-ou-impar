#include <iostream>
#include <string>
using namespace std; 

int main() {
    int num;
    cout << "Digite seu numero: ";
    cin >> num;

    if (cin.fail()) { 
        cout << "Erro, digite um numero!" << endl;
        return 0;
    }

    if (num % 2 == 0) {
        cout << "O numero " << num << " e par." << endl;
    }
    if (num % 2 != 0) {
        cout << "O numero " << num << " e impar." << endl;
    }

return 0;
}
