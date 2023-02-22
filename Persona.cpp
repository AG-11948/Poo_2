#include <iostream>
using namespace std;

class Persona{

// atributos
protected : string nombres, apellidos, direccion, fechaN, puesto;
        int telefono;
        int codigoE;
        
// constructo
protected :
      Persona(){
         }
        Persona(string nom, string ape,string dir, string fn, string pues, int tel, int cd){
        nombres = nom;
        apellidos = ape;
        direccion = dir;
        fechaN=fn;
        puesto=pues;
        telefono=tel;
        codigoE=cd;
     }

//metodo
void mostrar();
};
