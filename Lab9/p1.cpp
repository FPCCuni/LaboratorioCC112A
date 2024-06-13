/* Leyendo un archivo de texto con ifstream
Escribe un programa que abra un archivo de texto y 
muestre su contenido en la consola.*/
#include <iostream>
#include <fstream> //para trabajar con archivos
#include <string> 

//using namespace std;

int main(){
    /*
    std::ifstream infich; // creamos una instancia

    infich.open("arch1.txt"); // abrimos un archivo para lectura
   */
    std::ifstream infich("arch1.txt", std::ios::in); //creamos una instancia y abrimos el archivo

    std::string linea;
    if(infich.is_open()){

        while(getline(infich, linea)){
            std::cout << linea <<std::endl;
        }    
        

        

    }else{
        std::cerr << "No se pudo abrir el archivo" << std::endl;
        return 1;
    }

    infich.close(); //cerramos el archivo

    return 0; 
}