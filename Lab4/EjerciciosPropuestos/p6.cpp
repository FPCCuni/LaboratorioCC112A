#include <iostream>
using namespace std;

void intercambio(int *p, int *q){
    int temp = *p;
    *p = *q;
    *q = temp;
}

int main(){
    int a = 10;
    int b = 5;
    cout << "Antes del intercambio " <<endl;
    cout << "a = " << a <<endl;
    cout << "b = " << b <<endl;

    intercambio(&a, &b);
    cout << "Despues del intercambio " <<endl;
    cout << "a = " << a <<endl;
    cout << "b = " << b <<endl;


    return 0; 
}