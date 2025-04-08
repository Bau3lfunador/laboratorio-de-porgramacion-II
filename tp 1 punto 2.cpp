#include <iostream>
using namespace std;
int main() {
    float nota1, nota2, nota3, prom;
    cout << "Ingrese la nota 1: ";
    cin >> nota1;
    cout << "Ingrese la nota 2: ";
    cin >> nota2;
    cout << "Ingrese la nota 3: ";
    cin >> nota3;
    prom = (nota1 + nota2 + nota3) / 3;
    if (prom >= 7) {
        cout << "pomocionado" << endl;
    } else {
        if (prom >= 4) {
            cout << "Regular" << endl;
        } else {
            cout << "Reprobado" << endl;
        }
    }
    return 0;
}
