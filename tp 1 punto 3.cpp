#include <iostream>
using namespace std;

void verificarMenoresADiez(int a, int b, int c) {
    if (a < 10 && b < 10 && c < 10) {
        cout << "todos los numeros son menores a diez" << endl;
    }
}
int main() {
    int a, b, c;
    cout << "Ingrese tres numeros: ";
    cin >> a >> b >> c;
    verificarMenoresADiez(a, b, c);
    return 0;
}
