/*Escribe un programa que recorra un arreglo de números
enteros y calcule la suma de sus elementos.*/

#include <iostream>
using namespace std;

int main(){
    int a[] = {1,2,3,4,5,6};
    int n = sizeof(a)/sizeof(a[0]);

    //El nombre de un arreglo es un puntero (const) a su primer elemento
    cout << "&a[0] = " << &a[0] <<endl;
    cout << "&a = " << &a <<endl;

    int *p = a;
    int suma = 0;
    for(int i = 0; i < n; ++i){
        suma = suma + *p;
        p++;
    }

    
    cout << "La suma es: " << suma <<endl;


    return 0; 
}