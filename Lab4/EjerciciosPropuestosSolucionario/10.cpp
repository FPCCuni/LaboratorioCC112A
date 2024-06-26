/*Escribe un programa que copie los elementos de un arreglo de números
enteros en otro arreglo utilizando punteros.
*/

void copiarArray(int *a, int *b, int n){
    for(int i = 0; i < n; ++i){
        *(b+i) = *(a+i); 
    }
}

#include <iostream>
using namespace std;

int main(){
    int A[] = {1,2,3,4,5,6};
    int D[6];
    const int n = sizeof(A)/sizeof(A[0]);
    int *p = A;
    copiarArray(A,D, n);

    for(int i = 0; i <n; ++i){
        cout << *(D +i) << " ";
    }

    return 0; 
}