/*9. Escribe un programa que invierta el orden de los elementos de un arreglo
de números enteros utilizando punteros.
[1,2,3] -->[3,2,1]
*/
#include <iostream>
using namespace std;

void intercambio(int *p, int *q){
    int temp = *p;
    *p = *q;
    *q = temp;
}

void invArray(int *a, int n){
    int *izq = a;
    int *der = a + (n-1);
    while(izq < der){
        intercambio(izq,der);
        izq++;
        der--;
    }
}

void print(int *a, int n) {
    for(int i = 0; i < n; ++i){
        cout << *(a + i) <<" ";
    }
}
int main(){
    int a[]={1,2,3,4,5,6};
    int n = sizeof(a)/sizeof(a[0]);
    cout << "Arreglo original " << endl;
    print(a,n);

    invArray(a,n);
    cout << endl;
    cout << "Arreglo  invertido" << endl;

    print(a,n);

    return 0; 
}