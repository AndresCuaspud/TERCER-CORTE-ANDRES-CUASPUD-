#include <iostream>
using namespace std;

int main() {

    const int LIMITE = 5;
    int datos[LIMITE];

    cout << "Digita " << LIMITE << " valores enteros:\n";

    int pos = 0;
    while (pos < LIMITE) {
        cout << "Numero " << pos + 1 << ": ";
        cin >> datos[pos];
        pos++;
    }

    int total = 0;
    int j = 0;
    while (j < LIMITE) {
        total = total + datos[j];
        j++;
    }

    cout << "\nEl resultado de la suma es: " << total << endl;

    return 0;
}
