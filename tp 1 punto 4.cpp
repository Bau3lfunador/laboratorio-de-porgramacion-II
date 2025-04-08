#include <iostream>
using namespace std;
void contarCifras(int numero) {
    if (numero >= 0 && numero < 10)
        cout << "tiene 1 cifra" << endl;
    else if (numero < 100)
        cout << "tiene 2 cifras" << endl;
    else if (numero < 1000)
        cout << "tiene 3 cifras" << endl;
    else
        cout << "error el numero tiene mas de 3 cifras" << endl;
}
int main() {
    int numero;
    cout << "Ingrese un numero entero positivo: ";
    cin >> numero;
    contarCifras(numero);
    return 0;
}
