int tabla[3][3] = {
    {10, 20, 30},
    {40, 50, 60},
    {70, 80, 90}
};




#include <iostream>
using namespace std;

int main() {
    const int RENGLONES = 3;
    const int COLUMNAS = 3;
    int tabla[RENGLONES][COLUMNAS];

    // Captura de datos
    cout << "Digita los numeros para la tabla (" << RENGLONES << "x" << COLUMNAS << "):\n";
    for (int f = 0; f < RENGLONES; f++) {
        for (int c = 0; c < COLUMNAS; c++) {
            cout << "Posicion (" << f << ", " << c << "): ";
            cin >> tabla[f][c];
        }
    }

    // Mostrar resultados
    cout << "\nTabla generada:\n";
    for (int f = 0; f < RENGLONES; f++) {
        for (int c = 0; c < COLUMNAS; c++) {
            cout << tabla[f][c] << "\t";
        }
        cout << "\n";
    }

    return 0;
}
