#include <iostream>
using namespace std;


float calcularPromedio(float notas[], int cantidad) {
    float suma = 0;
    int i = 0;

    while (i < cantidad) {
        suma += notas[i];
        i++;
    }

    return suma / cantidad;
}


string determinarEstado(float promedio) {
    if (promedio >= 61) {
        return "Aprobado";
    } else {
        return "Reprobado";
    }
}


string determinarCategoria(float promedio) {
    if (promedio >= 85) {
        return "Excelente";
    } else if (promedio >= 70) {
        return "Bueno";
    } else if (promedio >= 61) {
        return "Regular";
    } else {
        return "Deficiente";
    }
}


void mostrarResultado(string nombre, string curso, float promedio, string estado, string categoria) {
    cout << "\n----- RESULTADO FINAL -----" << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Curso: " << curso << endl;
    cout << "Promedio: " << promedio << endl;
    cout << "Estado: " << estado << endl;
    cout << "Categoria: " << categoria << endl;
}

int main() {
    string nombre, curso;
    int cantidad;

    cout << "Nombre del estudiante: Hans Douglas Edenilzon Alvarado Milian" << endl;

    cout << "Ingrese el nombre del estudiante: ";
    getline(cin, nombre);

    cout << "Ingrese el curso: ";
    getline(cin, curso);

    cout << "Ingrese la cantidad de notas: ";
    cin >> cantidad;

    float notas[100];

    int i = 0;
    while (i < cantidad) {
        cout << "Ingrese la nota " << i + 1 << ": ";
        cin >> notas[i];
        i++;
    }

    float promedio = calcularPromedio(notas, cantidad);
    string estado = determinarEstado(promedio);
    string categoria = determinarCategoria(promedio);

    mostrarResultado(nombre, curso, promedio, estado, categoria);

    return 0;
}
