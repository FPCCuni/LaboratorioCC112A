/*Escribe un programa para imprimir la dirección de una variable
cuyo valor ingresa el usuario.
*/

/*. Escribe un programa para imprimir la dirección del
 puntero a una variable cuyo valor ingresa el usuario.*/

/*. Escribe un programa para imprimir el valor de la
 dirección del puntero a una variable cuyo valor ingresa el usuario.
*/

/*Escribe un programa para imprimir un número que se ingresa
 desde el teclado usando el puntero.*/
#include <iostream>
using namespace std;

int main(){
    int n;
    //cout << "Ingrese un entero"<<endl;
    //cin >>n;
    int *p = &n;

    cout << "Ingrese un numero " <<endl;
    cin >> *p; //operador de desreferencia


    cout << "La direccion de n es: " << &n<<endl;
    cout << "La direccion del puntero p es: " <<&p <<endl;
    cout << "El valor de la direccion del puntero p es: " << p <<endl;
    cout << "El valor de *p es: " << *p <<endl;
    cout << "El valo de n es: " <<n <<endl;
    return 0; 
}