/*(Leer un archivo CSV) 
Escribe un programa que lea un archivo CSV y muestre su 
contenido en la consola.*/
#include <iostream>
#include <fstream>
#include <sstream> //para flujo de cadenas
#include <iomanip> //(input output manipuoators)
using namespace std;

int main(){

    fstream infich("cc112A.csv", ios::in);

    string linea;

    while(getline(infich,linea)){
        stringstream ss(linea);
        string item;
        while(getline(ss,item,',')){
            cout << item << " ";
        }
        cout <<endl;

    }

    infich.close();

    return 0; 
}