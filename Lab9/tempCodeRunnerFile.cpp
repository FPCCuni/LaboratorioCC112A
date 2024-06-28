#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>

using namespace std;


void concatenaArch(ostream& salida, istream& ingreso1, istream& ingreso2) {
    string linea;
    
    while (getline(ingreso1, linea)) {
        salida << linea << endl;
    }

    while (getline(ingreso2, linea)) {
        salida << linea << endl;
    }
}


double calcularPromedio(istream& ingreso) {
    double suma = 0;
    int contador = 0;
    double numero;

    while (ingreso >> numero) {
        suma += numero;
        contador++;
    }
    return suma / contador;
}

int main() {
    ifstream entrada1("arch1.txt");
    ifstream entrada2("arch2.txt");
    

    ofstream salida("arch_concatenado.txt");

    if (!entrada1.is_open() || !entrada2.is_open() || !salida.is_open()) {
        cerr << "Error: No se pudieron abrir los archivos." << endl;
        return 1;
    }

   
    concatenaArch(salida, entrada1, entrada2);

    entrada1.close();
    entrada2.close();
    salida.close();

    
    ifstream salida1("arch_concatenado.txt");

    if (!salida1.is_open()) {
        cerr << "Error: No se pudo abrir el archivo concatenado." << endl;
        return 1;
    }

    
    double promedio = calcularPromedio(salida1);

    salida1.close();

    cout << "El promedio de los números en el archivo concatenado es: "
         << fixed << setprecision(2) << promedio << endl;

    return 0;
}
