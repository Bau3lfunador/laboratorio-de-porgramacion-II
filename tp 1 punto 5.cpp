#include <iostream>
using namespace std;
void evaluarNivel(int total, int correctas) {
    float porcentaje = (float)correctas / total * 100;
    if (porcentaje >= 90)
        cout << "nivel maximo" << endl;
    else if (porcentaje >= 75)
        cout << "nivel medio" << endl;
    else if (porcentaje >= 50)
        cout << "nivel regular" << endl;
    else
        cout << "fuera de nivel" << endl;
}
int main() {
    int total, correctas;
    cout << "Ingrese la cantidad total de preguntas: ";
    cin >> total;
    cout << "Ingrese la cantidad de respuestas correctas: ";
    cin >> correctas;
    evaluarNivel(total, correctas);
    return 0;
}
