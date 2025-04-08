#include <iostream>
using namespace std;
float calcularPago(int cantidad, float precio) {
    float total = cantidad * precio;
    if (cantidad == 2)
        total *= 0.9;
    else if (cantidad == 3)
        total *= 0.85;
    else if (cantidad == 4)
        total *= 0.8;
    return total;
}
int main() {
    int entradas;
    float precio;
    cout << "Ingrese cantidad de entradas (maximo 4): ";
    cin >> entradas;
    if (entradas < 1 || entradas > 4) {
        cout << "cantidad no permitida" << endl;
        return 0;
    }
    cout << "Ingrese el precio de una entrada: ";
    cin >> precio;
    float total = calcularPago(entradas, precio);
    cout << "el total a pagar es: " << total << endl;
    return 0;
}
