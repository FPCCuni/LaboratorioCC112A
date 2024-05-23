/*Escriba una función:
char *leer(void)
la cual lee del teclado una cadena de caracteres, la aloja en un bloque dinámico y retorna el
apuntador al bloque.
Desde la main( ) llame a leer( ), escriba la cadena leída y su longitud. La salida puede ser:
Ingrese una cadena de caracteres: hola
hola, longitud: 4
*/

#include <iostream>
#include<cstring>
using namespace std;

char *leer(){
   char *pc = new char[20];
   cout << "Ingrese una cadena: ";
   cin.getline(pc, 30);

   return pc;
   
}

int main() {
   char *resp = leer();
   cout << resp<< ", longitud: "  <<strlen(resp)<<endl; 
}
