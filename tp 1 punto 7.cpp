#include <iostream>
using namespace std;

float saldo = 10000;

void mostrarMenu() {
    cout << "1 consultar saldo" << endl;
    cout << "2 depositar dinero" << endl;
    cout << "3 retirar dinero" << endl;
    cout << "4 salir" << endl;
}

void consultarSaldo() {
    cout << "saldo actual: " << saldo << endl;
}

void depositar(float monto) {
    saldo += monto;
    cout << "deposito exitoso" << endl;
}

void retirar(float monto) {
    if (monto <= saldo) {
        saldo -= monto;
        cout << "retiro exitoso" << endl;
    } else {
        cout << "saldo insuficiente" << endl;
    }
}

int main() {
    int opcion;
    float monto;
    do {
        mostrarMenu();
        cout << "seleccione una opcion: ";
        cin >> opcion;
        switch(opcion) {
            case 1: consultarSaldo(); break;
            case 2: 
                cout << "monto a depositar: ";
                cin >> monto;
                depositar(monto); 
                break;
            case 3: 
                cout << "monto a retirar: ";
                cin >> monto;
                retirar(monto); 
                break;
            case 4: cout << "saliendo del sistema" << endl; break;
            default: cout << "opcion invalida" << endl;
        }
    } while(opcion != 4);
    return 0;
}
