/* Declare un arreglo tridimensional, proceda a imprimir el arreglo
 utilizando punteros*/

 #include <iostream>
 using namespace std;

 const int FILAS = 2;
 const int COLS = 3;
 const int HOJAS = 2;


//Arreglo de 1 dimension
void print1D(int *parr , int n){
    for(int i = 0; i < n; ++i){
        cout << *(parr + i) <<" ";
    }
    cout << endl;
}

//Arreglo de 2 dimensiones
void print2D(int (*pmatriz)[COLS], int FILAS, int COLS){
    for(int i = 0; i < FILAS; ++i){
        for(int j = 0; j< COLS; ++j){
            cout << *(*(pmatriz +i) + j) << " ";
        }
        cout << endl;
    }
}

//Arreglo de 3 dimensiones

 
 int main(){
    //Arreglo 1 dimension
    int a[COLS] = {1,2,3};
    int *pa = a; // int *pa = &a[0]; 
    print1D(pa,COLS);
    cout <<endl;


    //Areglos 2 dimensiones
    int b[FILAS][COLS] = {1,2,3, 4,5,6};
    //int *pb = b;

    int (*pb)[COLS] = b; // int *pb = &b[0][0];
    print2D(pb, FILAS, COLS);
 
    return 0; 
 }