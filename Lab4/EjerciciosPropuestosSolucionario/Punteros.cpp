#include <iostream>
#include <clocale>
using namespace std;


int main(){
    setlocale(LC_ALL,"");
    
    //puntero: tipo especial de variable que almacena 
    //la direccion de memoria de otra variable

    //Declarando y usando punteros
    int *p_num{};//inicializar� con nullptr (impl�cita)
    //solo puede almacenar la direcci�n de la variable de tipo int

    double *p_frac{};
    //solo puede almacenar la direccion de una variable de tipo double

    //Inicializaci�n expl�cita a nullptr
    int * p_num1{nullptr};
    int * p_num2{nullptr}; 

    //Todas las variables puntero tienen el mismo tama�o
    cout << "tama�o de p_num: " << sizeof(p_num)<<endl;
    cout << "tama�o de int: " << sizeof(int) <<endl; 
    
    cout << "tama�o de p_frac: " << sizeof(p_frac)<<endl;
    cout << "tama�o de double: " << sizeof(double) <<endl; 
    
    cout << "tama�o de p_number1: " << sizeof(p_num1)<<endl;
    cout << "tama�o de int: " << sizeof(int) <<endl; 
    

    //La posici�n de * en la declaraci�n  es flexible
    int* p_num3{nullptr};
    int * p_num4{nullptr};
    int *p_num5{nullptr};
    //Este �ltimo formato es f�cil de entender cuando declaramos
    //m�ltiples variables en una misma l�nea


    //Inicializando punteros y asignando datos

    //punteros almacenan DIRECCIONES de variables
    int n {5};
    int *p_int {&n};// operador direcci�n de (&)

    cout << "Valor de n: " << n << endl;
    cout << "Direcci�n de memoria, p_int: " << p_int <<endl;

    //Podemos cambiar la direcci�n almacenada en el puntero en
    //en cualquier momento
    int n1 {6};
    n1 = 7;
    p_int  = &n1; //asignamos otra direcci�n al puntero
    cout << "Nueva direcci�n de p_int: "<< p_int <<endl;

    //No puede cruzar asinaciones entre punteros 
    //de diferentes tipos
    int *p_int1{nullptr};
    double nd{4};
    //p_int1 = &nd; //error de compilaci�n

    //Desreferenciando un puntero
    int * p_int2{nullptr};
    int d_int ={32};
    p_int2 = &d_int;
    cout << "valor al que apunta p_int2: " << *p_int2 <<endl;


    //PUNTEROS A CHAR
    //Declaraci�n
    char *p_char {nullptr};
    char var_char {'A'};

    p_char = &var_char;
    cout << "El valor almacenado en p_char es: " << *p_char <<endl;
    
    char var_char1 {'C'};
    p_char = &var_char1;

    cout << "El valor almacenado en p_char es: " << *p_char <<endl;
    
    //Un puntero a char puede hacer algo ESPECIAL
    //Puedes inicializarlo con un literal de cadena: C-string
    char *pc {"Hola mundo!"};
    //La cadeda se expande en un arreglo de char y 
    //pc apunta al primer caracter H
    //Esto da flexibilidad para tratar con cadenas

    //ALGUNOS COMPILADORES PUEDE RECHAZAR COMPILAR ESTE C�DIGO
    //Razon: expande la cadena en un arreglo de char const
    //pc puede ser usado para modificar datos en el arreglo de char const
    //Fuerza a usar punteros que son calificados como const
    //closed char pointers,

    //Imprimiendo!?
    cout << "El mensaje es: " << pc <<endl;

    //si desreferenciamos el puntero
    cout << "El valor almacenado en pc es: " << *pc <<endl;

    //Puntero a char es especial
    //imprime el mensaje entero
    //compilador hace algo especial

    //debido a que se almacena en un array de char const
    //si intentamos modificar
    //El literal de cadena esta formado por char const
    //Intentar modificar cualquiera de ellos genera un comportamiento indeterminado

    //*pc = 'B';//cambiamos el mensaje
    //cout << "El mensaje despues de la modificaci�n: " << pc <<endl;

    //Si desea modificar el primer carater por ejemplo
    //no use puntero a char, use arreglos regulares
    //podemos modificar un array inicializado con literal de cadena

    char ch2[]{"Hola mundo1!"};
    ch2[0] = 'T';
    cout << "ch2: " << ch2 << endl;
    return 0; 
}