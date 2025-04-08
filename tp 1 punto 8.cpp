#include <iostream>
using namespace std;

int calcularMCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;
    cout << "ingrese el primer numero: ";
    cin >> num1;
    cout << "ingrese el segundo numero: ";
    cin >> num2;
    int mcd = calcularMCD(num1, num2);
    cout << "el mcd es: " << mcd << endl;
    return 0;
}
