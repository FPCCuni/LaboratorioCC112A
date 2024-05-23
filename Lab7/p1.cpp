/*Escriba un programa en C++ a fin de crear un vector dinámico el cual debe llenarse ingresando enteros
mayores a 0. Cada vez que se llene se debe redimensionarsu tamaño por dos, y continuar ingresando
datos hasta que el usuario crea conveniente, el vector inicial tiene tamaño 1. Finalmente imprimir
todos los valores del tamaño del vector actual con el formato indicado líneas abajo
*/

#include <iostream>
using namespace std;

int main() {
   int  *a = new int[1];
   int tam = 1;
   int elem = 0;

   int dato;

   //cout << "ingrese un valor: ";
   //cin >> dato;

   while(true){
      cout << "ingrese enteros, termine con -1: ";
      cin >> dato;

      if(dato == -1){
         break;
      }

      if(elem == tam){
         int *aa = new int[2*tam];

         for(int i = 0; i < tam; ++i){
            aa[i] = a[i];
         }

         delete [] a;

         a = aa;
         tam = 2*tam;
      }

      a[elem] = dato;
      elem++;
   }

   cout<<"\n";
   for(int i = 0; i < elem; ++i){
      cout << "val " << i << ": "<<  a[i]<<endl;
   }

   cout <<"\nTamaño actual: " << tam << endl;

   

}
